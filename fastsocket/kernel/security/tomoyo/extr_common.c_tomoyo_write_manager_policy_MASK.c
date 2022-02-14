
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {char* write_buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char**,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct tomoyo_io_buffer *VAR_2)
{
 char *VAR_3 = VAR_2->write_buf;
 bool VAR_4 = FUNC_1(&VAR_3, VAR_0);

 if (!FUNC_0(VAR_3, "manage_by_non_root")) {
  VAR_1 = !VAR_4;
  return 0;
 }
 return FUNC_2(VAR_3, VAR_4);
}
