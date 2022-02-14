
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int cur_file; int err; } ;
typedef enum ucl_parse_type { ____Placeholder_ucl_parse_type } ucl_parse_type ;
typedef enum ucl_duplicate_strategy { ____Placeholder_ucl_duplicate_strategy } ucl_duplicate_strategy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (char*,unsigned char**,size_t*,int *,int) ;
 int FUNC_5 (unsigned char*,size_t) ;
 int FUNC_6 (struct ucl_parser*,unsigned char*,size_t,unsigned int,int,int) ;
 int FUNC_7 (struct ucl_parser*,char*,int) ;
 int * FUNC_8 (char const*,char*) ;

bool
FUNC_9 (struct ucl_parser *VAR_2, const char *VAR_3,
  unsigned VAR_4, enum ucl_duplicate_strategy VAR_5,
  enum ucl_parse_type VAR_6)
{
 unsigned char *VAR_7;
 size_t VAR_8;
 bool VAR_9;
 char VAR_10[VAR_0];

 if (FUNC_8 (VAR_3, VAR_10) == ((void*)0)) {
  FUNC_3 (&VAR_2->err, "cannot open file %s: %s",
    VAR_3,
    FUNC_2 (VAR_1));
  return 0;
 }

 if (!FUNC_4 (VAR_10, &VAR_7, &VAR_8, &VAR_2->err, 1)) {
  return 0;
 }

 if (VAR_2->cur_file) {
  FUNC_0 (VAR_2->cur_file);
 }
 VAR_2->cur_file = FUNC_1 (VAR_10);
 FUNC_7 (VAR_2, VAR_10, 0);
 VAR_9 = FUNC_6 (VAR_2, VAR_7, VAR_8, VAR_4, VAR_5,
   VAR_6);

 if (VAR_8 > 0) {
  FUNC_5 (VAR_7, VAR_8);
 }

 return VAR_9;
}
