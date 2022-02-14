
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_iftype; int mlx_parent_dmat; int mlx_dev; int * mlx_mem; void* mlx_mem_rid; void* mlx_mem_type; int mlx_io_lock; int mlx_timeout; int mlx_config_lock; } ;
struct mlx_ident {int iftype; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* FUNC_0 (int ,void*,void**,int ) ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int) ;
 struct mlx_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct mlx_softc*) ;
 int FUNC_8 (struct mlx_softc*) ;
 struct mlx_ident* FUNC_9 (int ) ;
 int FUNC_10 (struct mlx_softc*) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,char*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
    struct mlx_softc *VAR_14;
    struct mlx_ident *VAR_15;
    int VAR_16;

    FUNC_4(1);

    FUNC_12(VAR_13);

    VAR_14 = FUNC_5(VAR_13);
    VAR_14->mlx_dev = VAR_13;





    VAR_15 = FUNC_9(VAR_13);
    if (VAR_15 == ((void*)0))
 return(VAR_6);
    VAR_14->mlx_iftype = VAR_15->iftype;

    FUNC_11(&VAR_14->mlx_io_lock, "mlx I/O", ((void*)0), VAR_9);
    FUNC_13(&VAR_14->mlx_config_lock, "mlx config");
    FUNC_3(&VAR_14->mlx_timeout, &VAR_14->mlx_io_lock, 0);






    switch(VAR_14->mlx_iftype) {
    case 131:
    case 130:
 VAR_14->mlx_mem_type = VAR_12;
 VAR_14->mlx_mem_rid = VAR_8;
 VAR_14->mlx_mem = FUNC_0(VAR_13, VAR_14->mlx_mem_type,
  &VAR_14->mlx_mem_rid, VAR_10);
 if (VAR_14->mlx_mem == ((void*)0)) {
     VAR_14->mlx_mem_type = VAR_11;
     VAR_14->mlx_mem_rid = VAR_7;
     VAR_14->mlx_mem = FUNC_0(VAR_13, VAR_14->mlx_mem_type,
  &VAR_14->mlx_mem_rid, VAR_10);
 }
 break;
    case 129:
    case 128:
 VAR_14->mlx_mem_type = VAR_12;
 VAR_14->mlx_mem_rid = VAR_7;
 VAR_14->mlx_mem = FUNC_0(VAR_13, VAR_14->mlx_mem_type,
  &VAR_14->mlx_mem_rid, VAR_10);
 break;
    }
    if (VAR_14->mlx_mem == ((void*)0)) {
 FUNC_6(VAR_14->mlx_dev, "couldn't allocate mailbox window\n");
 FUNC_8(VAR_14);
 return(VAR_6);
    }




    VAR_16 = FUNC_1(FUNC_2(VAR_13),
          1, 0,
          VAR_2,
          VAR_1,
          ((void*)0), ((void*)0),
          VAR_3,
          VAR_4,
          VAR_3,
          VAR_0,
          ((void*)0),
          ((void*)0),
          &VAR_14->mlx_parent_dmat);
    if (VAR_16 != 0) {
 FUNC_6(VAR_13, "can't allocate parent DMA tag\n");
 FUNC_8(VAR_14);
 return(VAR_5);
    }




    VAR_16 = FUNC_7(VAR_14);
    if (VAR_16 != 0) {
 FUNC_8(VAR_14);
 return(VAR_16);
    }




    FUNC_10(VAR_14);
    return(0);
}
