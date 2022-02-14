
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccb_scsiio*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int,int *,int ,int ,int *,int ,int ,size_t,int) ;
 int FUNC_2 (int ,int ,size_t*,int (*) (void*,char*),void*,char const*,int *) ;

int
FUNC_3(struct ccb_scsiio *VAR_3, u_int8_t *VAR_4,
   u_int32_t VAR_5, u_int32_t VAR_6, int VAR_7,
   int VAR_8, const char *VAR_9,
   int (*VAR_10)(void *VAR_11, char *VAR_12), void *VAR_13)
{
 size_t VAR_14;
 int VAR_15;

 if (VAR_3 == ((void*)0))
  return (0);





 if (VAR_10 == ((void*)0))
  return (-1);

 FUNC_0(VAR_3, sizeof(struct ccb_scsiio));

 if ((VAR_15 = FUNC_2(VAR_3->cdb_io.cdb_bytes, VAR_1,
    &VAR_14, VAR_10, VAR_13, VAR_9, ((void*)0))) == -1)
  return (VAR_15);

 FUNC_1(VAR_3,
                      VAR_7,
                     ((void*)0),
                    VAR_6,
                         VAR_0,
                       VAR_4,
                        VAR_5,
                        VAR_2,
                      VAR_14,
                      VAR_8 ? VAR_8 : 5000);

 return (VAR_15);
}
