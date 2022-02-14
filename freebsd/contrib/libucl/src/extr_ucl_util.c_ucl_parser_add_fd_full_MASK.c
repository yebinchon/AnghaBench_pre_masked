
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int * cur_file; int err; } ;
struct stat {size_t st_size; } ;
typedef enum ucl_parse_type { ____Placeholder_ucl_parse_type } ucl_parse_type ;
typedef enum ucl_duplicate_strategy { ____Placeholder_ucl_duplicate_strategy } ucl_duplicate_strategy ;


 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int,int ) ;
 unsigned char* FUNC_4 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_5 (unsigned char*,size_t) ;
 int FUNC_6 (struct ucl_parser*,unsigned char*,size_t,unsigned int,int,int) ;

bool
FUNC_7 (struct ucl_parser *VAR_4, int VAR_5,
  unsigned VAR_6, enum ucl_duplicate_strategy VAR_7,
  enum ucl_parse_type VAR_8)
{
 unsigned char *VAR_9;
 size_t VAR_10;
 bool VAR_11;
 struct stat VAR_12;

 if (FUNC_1 (VAR_5, &VAR_12) == -1) {
  FUNC_3 (&VAR_4->err, "cannot stat fd %d: %s",
   VAR_5, FUNC_2 (VAR_3));
  return 0;
 }
 if (VAR_12.st_size == 0) {
  return 1;
 }
 if ((VAR_9 = FUNC_4 (((void*)0), VAR_12.st_size, VAR_2, VAR_1, VAR_5, 0)) == VAR_0) {
  FUNC_3 (&VAR_4->err, "cannot mmap fd %d: %s",
   VAR_5, FUNC_2 (VAR_3));
  return 0;
 }

 if (VAR_4->cur_file) {
  FUNC_0 (VAR_4->cur_file);
 }
 VAR_4->cur_file = ((void*)0);
 VAR_10 = VAR_12.st_size;
 VAR_11 = FUNC_6 (VAR_4, VAR_9, VAR_10, VAR_6, VAR_7,
   VAR_8);

 if (VAR_10 > 0) {
  FUNC_5 (VAR_9, VAR_10);
 }

 return VAR_11;
}
