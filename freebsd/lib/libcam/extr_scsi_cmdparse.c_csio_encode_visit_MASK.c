
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {int dxfer_len; int data_ptr; } ;


 int FUNC_0 (int ,int ,int *,int (*) (void*,char*),void*,char const*,int *) ;

int
FUNC_1(struct ccb_scsiio *VAR_0, const char *VAR_1,
    int (*VAR_2)(void *VAR_3, char *VAR_4), void *VAR_5)
{





 if (VAR_2 == ((void*)0))
  return (-1);

 return (FUNC_0(VAR_0->data_ptr, VAR_0->dxfer_len, ((void*)0), VAR_2,
    VAR_5, VAR_1, ((void*)0)));
}
