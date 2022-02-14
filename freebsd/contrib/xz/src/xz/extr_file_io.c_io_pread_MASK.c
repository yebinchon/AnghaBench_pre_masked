
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int io_buf ;
struct TYPE_4__ {int src_name; int src_fd; } ;
typedef TYPE_1__ file_pair ;


 int VAR_0 ;
 size_t const VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 size_t FUNC_1 (TYPE_1__*,int *,size_t) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,...) ;
 int FUNC_4 (int ) ;

extern bool
FUNC_5(file_pair *VAR_3, io_buf *VAR_4, size_t VAR_5, off_t VAR_6)
{


 if (FUNC_2(VAR_3->src_fd, VAR_6, VAR_0) != VAR_6) {
  FUNC_3(FUNC_0("%s: Error seeking the file: %s"),
    VAR_3->src_name, FUNC_4(VAR_2));
  return 1;
 }

 const size_t VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 == VAR_1)
  return 1;

 if (VAR_7 != VAR_5) {
  FUNC_3(FUNC_0("%s: Unexpected end of file"),
    VAR_3->src_name);
  return 1;
 }

 return 0;
}
