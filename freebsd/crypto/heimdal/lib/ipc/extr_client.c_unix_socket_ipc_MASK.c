
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct path_ctx {int fd; } ;
typedef int ssize_t ;
typedef int rv ;
typedef int len ;
struct TYPE_4__ {int length; int * data; } ;
typedef TYPE_1__ heim_idata ;
typedef int * heim_icred ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_0,
  const heim_idata *VAR_1, heim_idata *VAR_2,
  heim_icred *VAR_3)
{
    struct path_ctx *VAR_4 = VAR_0;
    uint32_t VAR_5 = FUNC_0(VAR_1->length);
    uint32_t VAR_6;
    int VAR_7;

    if (VAR_3)
 *VAR_3 = ((void*)0);

    VAR_2->data = ((void*)0);
    VAR_2->length = 0;

    if (FUNC_3(VAR_4->fd, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
 return -1;
    if (FUNC_3(VAR_4->fd, VAR_1->data, VAR_1->length) != (ssize_t)VAR_1->length)
 return -1;

    if (FUNC_2(VAR_4->fd, &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
 return -1;
    if (FUNC_2(VAR_4->fd, &VAR_6, sizeof(VAR_6)) != sizeof(VAR_6))
 return -1;
    VAR_7 = FUNC_4(VAR_6);

    VAR_2->length = FUNC_4(VAR_5);
    if (VAR_2->length > 0) {
 VAR_2->data = FUNC_1(VAR_2->length);
 if (VAR_2->data == ((void*)0))
     return -1;
 if (FUNC_2(VAR_4->fd, VAR_2->data, VAR_2->length) != (ssize_t)VAR_2->length)
     return -1;
    } else
 VAR_2->data = ((void*)0);

    return VAR_7;
}
