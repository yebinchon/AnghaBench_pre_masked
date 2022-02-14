
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int handle; int status; } ;
struct TYPE_10__ {int handle; } ;
struct TYPE_12__ {TYPE_2__ usocket; TYPE_1__ file; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ sources; } ;
typedef TYPE_4__ isc_entropysource_t ;
struct TYPE_14__ {int sources; } ;
typedef TYPE_5__ isc_entropy_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int,int) ;






 int VAR_2 ;
 int FUNC_5 (int,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_6(isc_entropy_t *VAR_3) {
 isc_entropysource_t *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 fd_set VAR_8;
 fd_set VAR_9;

 VAR_5 = -1;
 FUNC_1(&VAR_8);
 FUNC_1(&VAR_9);

 VAR_4 = FUNC_2(VAR_3->sources);
 while (VAR_4 != ((void*)0)) {
  if (VAR_4->type == VAR_0) {
   VAR_6 = VAR_4->sources.file.handle;
   if (VAR_6 >= 0) {
    VAR_5 = FUNC_4(VAR_5, VAR_6);
    FUNC_0(VAR_6, &VAR_8);
   }
  }
  if (VAR_4->type == VAR_1) {
   VAR_6 = VAR_4->sources.usocket.handle;
   if (VAR_6 >= 0) {
    switch (VAR_4->sources.usocket.status) {
    case 131:
     break;
    case 132:
    case 133:
    case 130:
     VAR_5 = FUNC_4(VAR_5, VAR_6);
     FUNC_0(VAR_6, &VAR_9);
     break;
    case 128:
    case 129:
     VAR_5 = FUNC_4(VAR_5, VAR_6);
     FUNC_0(VAR_6, &VAR_8);
     break;
    }
   }
  }
  VAR_4 = FUNC_3(VAR_4, VAR_2);
 }

 if (VAR_5 < 0)
  return (-1);

 VAR_7 = FUNC_5(VAR_5 + 1, &VAR_8, &VAR_9, ((void*)0), ((void*)0));
 if (VAR_7 < 0)
  return (-1);

 return (VAR_7);
}
