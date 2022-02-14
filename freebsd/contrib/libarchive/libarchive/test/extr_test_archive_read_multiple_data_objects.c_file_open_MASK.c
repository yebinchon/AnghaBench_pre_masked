
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mydata {scalar_t__ fd; int * buffer; int filename; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_5, void *VAR_6)
{
  struct mydata *VAR_7 = (struct mydata *)VAR_6;
  (void)VAR_5;
  if (VAR_7->fd < 0)
  {
    VAR_7->fd = FUNC_1(VAR_7->filename, VAR_4 | VAR_3);
    if (VAR_7->fd >= 0)
    {
      if ((VAR_7->buffer = (void*)FUNC_0(1, VAR_2)) == ((void*)0))
        return (VAR_0);
    }
  }
  return (VAR_1);
}
