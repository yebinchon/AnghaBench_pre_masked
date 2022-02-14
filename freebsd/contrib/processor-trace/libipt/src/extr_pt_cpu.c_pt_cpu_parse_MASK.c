
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct pt_cpu {void* stepping; void* model; int family; int vendor; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (char const*,char**,int ) ;

int FUNC_1(struct pt_cpu *VAR_4, const char *VAR_5)
{
 const char VAR_6 = '/';
 char *VAR_7;
 long VAR_8, VAR_9, VAR_10;

 if (!VAR_4 || !VAR_5)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_5, &VAR_7, 0);
 if (VAR_5 == VAR_7 || *VAR_7 == '\0' || *VAR_7 != VAR_6)
  return -VAR_3;

 if (VAR_8 < 0 || VAR_8 > VAR_1)
  return -VAR_3;


 VAR_5 = VAR_7 + 1;

 VAR_9 = FUNC_0(VAR_5, &VAR_7, 0);
 if (VAR_5 == VAR_7 || (*VAR_7 != '\0' && *VAR_7 != VAR_6))
  return -VAR_3;

 if (VAR_9 < 0 || VAR_9 > VAR_0)
  return -VAR_3;

 if (*VAR_7 == '\0')

  VAR_10 = 0;
 else {

  VAR_5 = VAR_7 + 1;

  VAR_10 = FUNC_0(VAR_5, &VAR_7, 0);
  if (*VAR_7 != '\0')
   return -VAR_3;

  if (VAR_10 < 0 || VAR_10 > VAR_0)
   return -VAR_3;
 }

 VAR_4->vendor = VAR_2;
 VAR_4->family = (uint16_t) VAR_8;
 VAR_4->model = (uint8_t) VAR_9;
 VAR_4->stepping = (uint8_t) VAR_10;

 return 0;
}
