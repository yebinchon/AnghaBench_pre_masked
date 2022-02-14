
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_memseg {int segid; size_t len; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct vm_memseg*) ;
 size_t FUNC_1 (char*,int ,size_t) ;

int
FUNC_2(struct vmctx *VAR_3, int VAR_4, size_t *VAR_5, char *VAR_6,
    size_t VAR_7)
{
 struct vm_memseg VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_8.segid = VAR_4;
 VAR_10 = FUNC_0(VAR_3->fd, VAR_1, &VAR_8);
 if (VAR_10 == 0) {
  *VAR_5 = VAR_8.len;
  VAR_9 = FUNC_1(VAR_6, VAR_8.name, VAR_7);
  if (VAR_9 >= VAR_7) {
   VAR_2 = VAR_0;
   VAR_10 = -1;
  }
 }
 return (VAR_10);
}
