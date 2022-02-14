
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ng_parse_type {struct ng_parse_fixedstring_info* info; } ;
struct ng_parse_fixedstring_info {int bufSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int * const,int) ;
 int FUNC_1 (int * const,int) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (char const*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_4(const struct ng_parse_type *VAR_3,
 const char *VAR_4, int *VAR_5, const u_char *const VAR_6,
 u_char *const VAR_7, int *VAR_8)
{
 const struct ng_parse_fixedstring_info *const VAR_9 = VAR_3->info;
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 if ((VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_11, &VAR_12)) == ((void*)0))
  return (VAR_1);
 if (VAR_12 + 1 > VAR_9->bufSize) {
  FUNC_2(VAR_10, VAR_2);
  return (VAR_0);
 }
 *VAR_5 += VAR_11;
 FUNC_0(VAR_10, VAR_7, VAR_12);
 FUNC_2(VAR_10, VAR_2);
 FUNC_1(VAR_7 + VAR_12, VAR_9->bufSize - VAR_12);
 *VAR_8 = VAR_9->bufSize;
 return (0);
}
