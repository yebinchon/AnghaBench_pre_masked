
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct au_info {int parent_dmat; int * sh; int * st; int unit; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {int nummaps; TYPE_1__* map; } ;
struct TYPE_3__ {int ln2size; int type; int base; } ;


 struct ac97_info* FUNC_0 (int ,struct au_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 () ;
 int VAR_18 ;
 int FUNC_4 (int ,struct au_info*) ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (struct au_info*) ;
 int FUNC_6 (struct au_info*,int ,int ,int ,int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 struct resource* FUNC_7 (int ,int,int*,int) ;
 scalar_t__ FUNC_8 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int,struct resource*) ;
 int FUNC_11 (int ,struct resource*,void*) ;
 int VAR_22 ;
 TYPE_2__* VAR_23 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct au_info*,int ) ;
 struct au_info* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ,int ,struct ac97_info*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int *,struct au_info*) ;
 scalar_t__ FUNC_19 (int ,struct au_info*,int,int) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (struct resource*) ;
 int FUNC_23 (struct resource*) ;
 int FUNC_24 (struct resource*) ;
 int VAR_24 ;
 scalar_t__ FUNC_25 (int ,struct resource*,int ,int ,struct au_info*,void**) ;
 int FUNC_26 (char*,int,char*,char*,int ,int ,int ) ;
 int VAR_25 ;

__attribute__((used)) static int
FUNC_27(device_t VAR_26)
{
 struct au_info *VAR_27;
 int VAR_28[10];
 int VAR_29[10];
 struct resource *VAR_30[10];
 int VAR_31, VAR_32, VAR_33 = 0;
 int VAR_34;
 struct resource *VAR_35;
 void *VAR_36;
 struct ac97_info *VAR_37;
 char VAR_38[VAR_14];

 VAR_27 = FUNC_15(sizeof(*VAR_27), VAR_6, VAR_7 | VAR_8);
 VAR_27->unit = FUNC_12(VAR_26);

 FUNC_17(VAR_26);

 VAR_35 = ((void*)0);
 VAR_36 = ((void*)0);
 VAR_32=0;

 for (VAR_31=0; VAR_31<VAR_10; VAR_31++) {
  VAR_29[VAR_32] = FUNC_1(VAR_31);
  VAR_28[VAR_32] = VAR_17;
  VAR_30[VAR_32] = FUNC_7(VAR_26, VAR_28[VAR_32], &VAR_29[VAR_32],
      VAR_12);
  if (!VAR_30[VAR_32]) {
   VAR_28[VAR_32] = VAR_15;
   VAR_30[VAR_32] = FUNC_7(VAR_26, VAR_28[VAR_32],
       &VAR_29[VAR_32], VAR_12);
  }
  if (VAR_30[VAR_32]) {
   VAR_27->st[VAR_31] = FUNC_23(VAR_30[VAR_32]);
   VAR_27->sh[VAR_31] = FUNC_22(VAR_30[VAR_32]);
   VAR_33++;
  }



  if (VAR_33) VAR_32++;
  if (VAR_32 == 10) {

   FUNC_13(VAR_26, "too many resources");
   goto bad;
  }
 }
 FUNC_6(VAR_27, 0, VAR_1, 0, 4);

 VAR_34 = 0;
 VAR_35 = FUNC_7(VAR_26, VAR_16, &VAR_34,
         VAR_12 | VAR_13);
 if (!VAR_35 || FUNC_25(VAR_26, VAR_35, 0, VAR_19, VAR_27, &VAR_36)) {
  FUNC_13(VAR_26, "unable to map interrupt\n");
  goto bad;
 }

 if (FUNC_5(VAR_27)) FUNC_13(VAR_26, "irq test failed\n");

 if (FUNC_4(VAR_26, VAR_27) == -1) {
  FUNC_13(VAR_26, "unable to initialize the card\n");
  goto bad;
 }

 VAR_37 = FUNC_0(VAR_26, VAR_27, VAR_18);
 if (VAR_37 == ((void*)0)) goto bad;
 if (FUNC_16(VAR_26, FUNC_3(), VAR_37) == -1) goto bad;

 if (FUNC_8( FUNC_9(VAR_26), 2,
              0,
             VAR_3,
              VAR_2,
            ((void*)0), ((void*)0),
             VAR_0, 1, 0x3ffff,
           0, VAR_22,
             &VAR_5, &VAR_27->parent_dmat) != 0) {
  FUNC_13(VAR_26, "unable to create dma tag\n");
  goto bad;
 }

 FUNC_26(VAR_38, VAR_14, "at %s 0x%jx irq %jd %s",
   (VAR_28[0] == VAR_15)? "io" : "memory",
   FUNC_24(VAR_30[0]), FUNC_24(VAR_35),FUNC_2(VAR_24));

 if (FUNC_19(VAR_26, VAR_27, 1, 1)) goto bad;

 FUNC_18(VAR_26, VAR_11, &VAR_20, VAR_27);
 FUNC_20(VAR_26, VAR_38);

 return 0;

 bad:
 if (VAR_27) FUNC_14(VAR_27, VAR_6);
 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
  FUNC_10(VAR_26, VAR_28[VAR_31], VAR_29[VAR_31], VAR_30[VAR_31]);
 if (VAR_36) FUNC_11(VAR_26, VAR_35, VAR_36);
 if (VAR_35) FUNC_10(VAR_26, VAR_16, VAR_34, VAR_35);
 return VAR_4;
}
