
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int parent_dmat; int bufsz; int ih; int * irq; int irqid; int * reg; int sh; int st; int regid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,struct sc_info*) ;
 void* FUNC_2 (int ,int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,struct sc_info*,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_10, struct sc_info *VAR_11)
{
 VAR_11->regid = FUNC_0(0);
 VAR_11->reg = FUNC_2(VAR_10, VAR_7, &VAR_11->regid,
      VAR_5);
 if (VAR_11->reg == ((void*)0)) {
  FUNC_5(VAR_10, "unable to allocate register space\n");
  goto bad;
 }
 VAR_11->st = FUNC_8(VAR_11->reg);
 VAR_11->sh = FUNC_7(VAR_11->reg);

 VAR_11->irq = FUNC_2(VAR_10, VAR_8, &VAR_11->irqid,
      VAR_5 | VAR_6);
 if (VAR_11->irq == ((void*)0)) {
  FUNC_5(VAR_10, "unable to allocate interrupt\n");
  goto bad;
 }

 if (FUNC_9(VAR_10, VAR_11->irq, VAR_4, VAR_9,
      VAR_11, &VAR_11->ih)) {
  FUNC_5(VAR_10, "unable to setup interrupt\n");
  goto bad;
 }

 VAR_11->bufsz = FUNC_6(VAR_10, 4096, VAR_0, 65536);

 if (FUNC_3( FUNC_4(VAR_10),
                       2, 0,
                     VAR_2,
                      VAR_1,
                    ((void*)0), ((void*)0),
                     VAR_11->bufsz,
                       1, 0x3ffff,
                   0, ((void*)0),
                     ((void*)0), &VAR_11->parent_dmat) != 0) {
  FUNC_5(VAR_10, "unable to create dma tag\n");
  goto bad;
 }
 return 0;
 bad:
 FUNC_1(VAR_10, VAR_11);
 return VAR_3;
}
