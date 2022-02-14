
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u_int16_t ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {int arcount; } ;
struct TYPE_4__ {unsigned int options; } ;
typedef TYPE_2__ HEADER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,int *) ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(res_state VAR_7,
  int VAR_8,
  u_char *VAR_9,
  int VAR_10,
  int VAR_11)
{
 HEADER *VAR_12;
 u_char *VAR_13, *VAR_14;
 u_int16_t VAR_15 = 0;






 VAR_12 = (HEADER *) VAR_9;
 VAR_13 = VAR_9 + VAR_8;
 VAR_14 = VAR_9 + VAR_10;

 if ((VAR_14 - VAR_13) < 1 + VAR_5)
  return (-1);

 *VAR_13++ = 0;
 FUNC_1(VAR_6, VAR_13);
 VAR_13 += VAR_0;
 if (VAR_11 > 0xffff)
  VAR_11 = 0xffff;
 FUNC_1(VAR_11 & 0xffff, VAR_13);
 VAR_13 += VAR_0;
 *VAR_13++ = VAR_1;
 *VAR_13++ = 0;

 if (VAR_7->options & VAR_4) {




  VAR_15 |= VAR_2;
 }
 FUNC_1(VAR_15, VAR_13);
 VAR_13 += VAR_0;

 FUNC_1(0U, VAR_13);
 VAR_13 += VAR_0;

 VAR_12->arcount = FUNC_0(FUNC_2(VAR_12->arcount) + 1);

 return (VAR_13 - VAR_9);
}
