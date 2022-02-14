
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* ioa_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_6__ {int * mb; int ioa_to_host_db; int host_to_ioa_db; int ioa_to_host_db_clr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int *,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_7(pqisrc_softstate_t *VAR_11,
     uint32_t *VAR_12)
{
 int VAR_13 = VAR_4;
 int VAR_14 = 0;
 uint32_t VAR_15 = VAR_7;

 int VAR_16;

 FUNC_2("IN\n");



 for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
  FUNC_6(VAR_11, &VAR_11->ioa_reg->mb[VAR_14],
            VAR_2+VAR_14*4, FUNC_3(VAR_12[VAR_14]));

 FUNC_6(VAR_11, &VAR_11->ioa_reg->ioa_to_host_db_clr,
  VAR_1, FUNC_3(0x1000));


 FUNC_6(VAR_11, &VAR_11->ioa_reg->host_to_ioa_db,
  VAR_0, FUNC_3(VAR_9));






 VAR_16 = FUNC_5(VAR_11, &VAR_11->ioa_reg->ioa_to_host_db, VAR_1);

 FUNC_2("val : %x\n",VAR_16);

 FUNC_0((FUNC_5(VAR_11, &VAR_11->ioa_reg->ioa_to_host_db, VAR_1) &
  VAR_6), VAR_15);
 if (!VAR_15) {
  FUNC_1("Sync command %x, timedout\n", VAR_12[0]);
  VAR_13 = VAR_5;
  goto err_out;
 }

 VAR_12[0] = FUNC_3(FUNC_5(VAR_11, &VAR_11->ioa_reg->mb[0], VAR_2));

 if (VAR_12[0] != VAR_8) {
  FUNC_1("SIS cmd failed with status = 0x%x\n",
   VAR_12[0]);
  VAR_13 = VAR_3;
  goto err_out;
 }


 for (VAR_14 = 1; VAR_14 < 6; VAR_14++)
  VAR_12[VAR_14] = FUNC_3(FUNC_5(VAR_11, &VAR_11->ioa_reg->mb[VAR_14], VAR_2+VAR_14*4));

 FUNC_2("OUT\n");
 return VAR_13;

err_out:
 FUNC_2("OUT failed\n");
 return VAR_13;
}
