
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uuid {int time_low; int time_mid; int time_hi_and_version; int clock_seq_hi_and_reserved; int clock_seq_low; int* node; } ;


 int VAR_0 ;
 int FUNC_0 (struct uuid*,int) ;
 int FUNC_1 (char const*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_1, struct uuid *VAR_2)
{
 u_int VAR_3[11];
 int VAR_4;


 if (*VAR_1 == '\0') {
  FUNC_0(VAR_2, sizeof(*VAR_2));
  return (0);
 }


 if (FUNC_2(VAR_1) != 36)
  return (VAR_0);







 if (VAR_1[8] != '-')
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_1, "%8x-%4x-%4x-%2x%2x-%2x%2x%2x%2x%2x%2x", VAR_3 + 0, VAR_3 + 1,
     VAR_3 + 2, VAR_3 + 3, VAR_3 + 4, VAR_3 + 5, VAR_3 + 6, VAR_3 + 7, VAR_3 + 8, VAR_3 + 9, VAR_3 + 10);

 if (VAR_4 != 11)
  return (VAR_0);


 VAR_2->time_low = VAR_3[0];
 VAR_2->time_mid = VAR_3[1];
 VAR_2->time_hi_and_version = VAR_3[2];
 VAR_2->clock_seq_hi_and_reserved = VAR_3[3];
 VAR_2->clock_seq_low = VAR_3[4];
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_2->node[VAR_4] = VAR_3[VAR_4 + 5];


 return (((VAR_3[3] & 0x80) != 0x00 &&
     (VAR_3[3] & 0xc0) != 0x80 &&
     (VAR_3[3] & 0xe0) != 0xc0) ? VAR_0 : 0);
}
