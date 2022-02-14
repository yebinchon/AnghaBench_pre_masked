
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_memseg {size_t len; int segid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_memseg*) ;
 int FUNC_1 (struct vm_memseg*,int) ;
 scalar_t__ FUNC_2 (size_t,char const*,size_t,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,struct vm_memseg*) ;
 size_t FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (struct vmctx*,int,size_t*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_4, int VAR_5, size_t VAR_6, const char *VAR_7)
{
 struct vm_memseg VAR_8;
 size_t VAR_9;
 int VAR_10;






 VAR_10 = FUNC_5(VAR_4, VAR_5, &VAR_8.len, VAR_8.name,
     sizeof(VAR_8.name));
 if (VAR_10)
  return (VAR_10);

 if (VAR_8.len != 0) {
  if (FUNC_2(VAR_6, VAR_7, VAR_8.len, FUNC_0(&VAR_8))) {
   VAR_3 = VAR_0;
   return (-1);
  } else {
   return (0);
  }
 }

 FUNC_1(&VAR_8, sizeof(struct vm_memseg));
 VAR_8.segid = VAR_5;
 VAR_8.len = VAR_6;
 if (VAR_7 != ((void*)0)) {
  VAR_9 = FUNC_4(VAR_8.name, VAR_7, sizeof(VAR_8.name));
  if (VAR_9 >= sizeof(VAR_8.name)) {
   VAR_3 = VAR_1;
   return (-1);
  }
 }

 VAR_10 = FUNC_3(VAR_4->fd, VAR_2, &VAR_8);
 return (VAR_10);
}
