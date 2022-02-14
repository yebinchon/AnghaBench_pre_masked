
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* dma_vaddr; scalar_t__ dma_paddr; } ;
struct glxsb_softc {TYPE_1__ sc_dma; } ;
struct glxsb_session {char* ses_iv; int ses_key; } ;
struct cryptop {int crp_buf; int crp_flags; } ;
struct cryptodesc {int crd_len; int crd_flags; char* crd_iv; scalar_t__ crd_skip; scalar_t__ crd_inject; } ;
typedef int op_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_3 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_4 (struct glxsb_softc*,scalar_t__,scalar_t__,scalar_t__,int ,int,char*) ;
 int FUNC_5 (struct glxsb_softc*,TYPE_1__*) ;
 int FUNC_6 (struct glxsb_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct cryptop *VAR_8, struct cryptodesc *VAR_9,
    struct glxsb_session *VAR_10, struct glxsb_softc *VAR_11)
{
 char *VAR_12, *VAR_13;
 uint32_t VAR_14, VAR_15;
 uint8_t VAR_16[VAR_5], *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22;
 uint32_t VAR_23;

 if (VAR_9 == ((void*)0) || (VAR_9->crd_len % VAR_5) != 0)
  return (VAR_3);


 VAR_21 = VAR_9->crd_len > VAR_4 ?
     VAR_4 : VAR_9->crd_len;





 VAR_12 = VAR_11->sc_dma.dma_vaddr;
 VAR_13 = (char *)VAR_11->sc_dma.dma_vaddr + VAR_21;

 VAR_14 = VAR_11->sc_dma.dma_paddr;
 VAR_15 = VAR_11->sc_dma.dma_paddr + VAR_21;

 if (VAR_9->crd_flags & VAR_0) {
  VAR_23 = VAR_7;
  if (VAR_9->crd_flags & VAR_1)
   FUNC_0(VAR_9->crd_iv, VAR_16, sizeof(VAR_16));
  else
   FUNC_0(VAR_10->ses_iv, VAR_16, sizeof(VAR_16));

  if ((VAR_9->crd_flags & VAR_2) == 0) {
   FUNC_2(VAR_8->crp_flags, VAR_8->crp_buf,
       VAR_9->crd_inject, sizeof(VAR_16), VAR_16);
  }
 } else {
  VAR_23 = VAR_6;
  if (VAR_9->crd_flags & VAR_1)
   FUNC_0(VAR_9->crd_iv, VAR_16, sizeof(VAR_16));
  else {
   FUNC_3(VAR_8->crp_flags, VAR_8->crp_buf,
       VAR_9->crd_inject, sizeof(VAR_16), VAR_16);
  }
 }

 VAR_22 = 0;
 VAR_20 = VAR_9->crd_len;
 VAR_17 = VAR_16;


 while (VAR_20 > 0) {
  VAR_19 = (VAR_20 > VAR_4) ? VAR_4 : VAR_20;
  FUNC_3(VAR_8->crp_flags, VAR_8->crp_buf,
      VAR_9->crd_skip + VAR_22, VAR_19, VAR_12);

  FUNC_6(VAR_11, &VAR_11->sc_dma);

  VAR_18 = FUNC_4(VAR_11, VAR_23, VAR_14, VAR_15, VAR_10->ses_key,
      VAR_19, VAR_16);

  FUNC_5(VAR_11, &VAR_11->sc_dma);
  if (VAR_18 != 0)
   return (VAR_18);

  FUNC_2(VAR_8->crp_flags, VAR_8->crp_buf,
      VAR_9->crd_skip + VAR_22, VAR_19, VAR_13);

  VAR_22 += VAR_19;
  VAR_20 -= VAR_19;

  if (VAR_20 <= 0) {

   VAR_17 = VAR_10->ses_iv;
  }
  if (VAR_9->crd_flags & VAR_0)
   FUNC_0(VAR_13 + VAR_19 - sizeof(VAR_16), VAR_17, sizeof(VAR_16));
  else {

   if (VAR_20 > 0) {
    FUNC_0(VAR_12 + VAR_19 - sizeof(VAR_16), VAR_17,
        sizeof(VAR_16));
   }
  }
 }


 FUNC_1(VAR_11->sc_dma.dma_vaddr, VAR_21 * 2);

 return (0);
}
