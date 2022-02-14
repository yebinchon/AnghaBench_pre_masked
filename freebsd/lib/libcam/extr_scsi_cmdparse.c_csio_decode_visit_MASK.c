
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {scalar_t__ dxfer_len; int data_ptr; } ;


 int FUNC_0 (int ,size_t,void (*) (void*,int,void*,int,char*),void*,char const*,int *) ;

int
FUNC_1(struct ccb_scsiio *VAR_0, const char *VAR_1,
    void (*VAR_2)(void *, int, void *, int, char *),
    void *VAR_3)
{





 if (VAR_2 == ((void*)0))
  return (-1);

 return (FUNC_0(VAR_0->data_ptr, (size_t)VAR_0->dxfer_len,
      VAR_2, VAR_3, VAR_1, ((void*)0)));
}
