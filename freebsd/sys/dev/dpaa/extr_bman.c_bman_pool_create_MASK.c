
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
typedef int t_VirtToPhys ;
typedef int t_PutBufFunction ;
typedef int t_PhysToVirt ;
typedef int * t_Handle ;
typedef int t_GetBufFunction ;
struct TYPE_5__ {void* bufferSize; int * f_VirtToPhys; int * f_PhysToVirt; int * f_PutBuf; int * f_GetBuf; int * h_BufferPool; } ;
struct TYPE_6__ {TYPE_1__ bufferPoolInfo; void* numOfBuffers; int * h_App; int * h_BmPortal; int h_Bm; } ;
typedef TYPE_2__ t_BmPoolParam ;
typedef int t_BmDepletionCallback ;
struct bman_softc {int * sc_bpool_cpu; int sc_bh; } ;
typedef int bpp ;


 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,void*,void*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (struct bman_softc*) ;
 struct bman_softc* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

t_Handle
FUNC_12(uint8_t *VAR_8, uint16_t VAR_9, uint16_t VAR_10,
    uint16_t VAR_11, uint16_t VAR_12, t_GetBufFunction *VAR_13,
    t_PutBufFunction *VAR_14, uint32_t VAR_15, uint32_t VAR_16,
    uint32_t VAR_17, uint32_t VAR_18,
    t_BmDepletionCallback *VAR_19, t_Handle VAR_20,
    t_PhysToVirt *VAR_21, t_VirtToPhys *VAR_22)
{
 uint32_t VAR_23[VAR_5];
 struct bman_softc *VAR_24;
 t_Handle VAR_25, VAR_26;
 t_BmPoolParam VAR_27;
 int VAR_28;

 VAR_24 = VAR_6;
 VAR_25 = ((void*)0);

 FUNC_10();

 VAR_26 = FUNC_8(VAR_24);
 if (VAR_26 == ((void*)0))
  goto err;

 FUNC_9(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.h_Bm = VAR_24->sc_bh;
 VAR_27.h_BmPortal = VAR_26;
 VAR_27.h_App = VAR_20;
 VAR_27.numOfBuffers = VAR_12;

 VAR_27.bufferPoolInfo.h_BufferPool = VAR_20;
 VAR_27.bufferPoolInfo.f_GetBuf = VAR_13;
 VAR_27.bufferPoolInfo.f_PutBuf = VAR_14;
 VAR_27.bufferPoolInfo.f_PhysToVirt = VAR_21;
 VAR_27.bufferPoolInfo.f_VirtToPhys = VAR_22;
 VAR_27.bufferPoolInfo.bufferSize = VAR_9;

 VAR_25 = FUNC_0(&VAR_27);
 if (VAR_25 == ((void*)0))
  goto err;





 FUNC_1(VAR_25, 0);

 if (VAR_11 != 0 || VAR_10 != 0) {
  VAR_28 = FUNC_3(VAR_25, VAR_10, VAR_11);
  if (VAR_28 != VAR_4)
   goto err;
 }

 if (VAR_19 != ((void*)0)) {
  VAR_23[VAR_2] = VAR_15;
  VAR_23[VAR_3] = VAR_16;
  VAR_23[VAR_0] = VAR_17;
  VAR_23[VAR_1] = VAR_18;
  VAR_28 = FUNC_2(VAR_25, VAR_19, VAR_23);
  if (VAR_28 != VAR_4)
   goto err;
 }

 VAR_28 = FUNC_6(VAR_25);
 if (VAR_28 != VAR_4)
  goto err;

 *VAR_8 = FUNC_5(VAR_25);
 VAR_24->sc_bpool_cpu[*VAR_8] = FUNC_7(VAR_7);

 FUNC_11();

 return (VAR_25);

err:
 if (VAR_25 != ((void*)0))
  FUNC_4(VAR_25);

 FUNC_11();

 return (((void*)0));
}
