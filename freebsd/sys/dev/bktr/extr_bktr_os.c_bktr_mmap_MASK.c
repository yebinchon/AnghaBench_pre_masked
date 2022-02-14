
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int dummy; } ;
struct bktr_softc {scalar_t__ alloc_pages; int bigbuf; } ;
typedef struct bktr_softc* bktr_ptr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct cdev*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5( struct cdev *VAR_4, vm_ooffset_t VAR_5, vm_paddr_t *VAR_6,
    int VAR_7, vm_memattr_t *VAR_8 )
{
 int VAR_9;
 bktr_ptr_t VAR_10;

 VAR_9 = FUNC_1(FUNC_2(VAR_4));

 if (FUNC_0(FUNC_2(VAR_4)) > 0)
  return( -1 );


 VAR_10 = (struct bktr_softc*)FUNC_3(VAR_3, VAR_9);
 if (VAR_10 == ((void*)0)) {

  return (VAR_0);
 }

 if (VAR_7 & VAR_2)
  return( -1 );

 if (VAR_5 < 0)
  return( -1 );

 if (VAR_5 >= VAR_10->alloc_pages * VAR_1)
  return( -1 );

 *VAR_6 = FUNC_4(VAR_10->bigbuf) + VAR_5;
 return( 0 );
}
