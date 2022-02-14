
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ax25_call; } ;
typedef TYPE_1__ ax25_address ;



void FUNC_0(ax25_address *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1, VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  if (*VAR_2 != '\0' && *VAR_2 != '-')
   VAR_0->ax25_call[VAR_3] = *VAR_2++;
  else
   VAR_0->ax25_call[VAR_3] = ' ';
  VAR_0->ax25_call[VAR_3] <<= 1;
  VAR_0->ax25_call[VAR_3] &= 0xFE;
 }

 if (*VAR_2++ == '\0') {
  VAR_0->ax25_call[6] = 0x00;
  return;
 }

 VAR_0->ax25_call[6] = *VAR_2++ - '0';

 if (*VAR_2 != '\0') {
  VAR_0->ax25_call[6] *= 10;
  VAR_0->ax25_call[6] += *VAR_2++ - '0';
 }

 VAR_0->ax25_call[6] <<= 1;
 VAR_0->ax25_call[6] &= 0x1E;
}
