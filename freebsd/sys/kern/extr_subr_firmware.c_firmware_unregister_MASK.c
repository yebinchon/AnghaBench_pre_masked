
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct priv_fw {scalar_t__ refcnt; int file; TYPE_1__ fw; } ;
typedef int linker_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct priv_fw*,int) ;
 int VAR_2 ;
 int FUNC_1 (void*,int ) ;
 struct priv_fw* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(const char *VAR_3)
{
 struct priv_fw *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2);
 VAR_4 = FUNC_2(VAR_3, ((void*)0));
 if (VAR_4 == ((void*)0)) {






  VAR_5 = 0;
 } else if (VAR_4->refcnt != 0) {
  VAR_5 = VAR_0;
 } else {
  linker_file_t VAR_6 = VAR_4->file;






  FUNC_1((void *) (uintptr_t) VAR_4->fw.name, VAR_1);
  FUNC_0(VAR_4, sizeof(struct priv_fw));
  VAR_4->file = VAR_6;
  VAR_5 = 0;
 }
 FUNC_4(&VAR_2);
 return VAR_5;
}
