
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int halted_cpus; int active_cpus; scalar_t__ suspend; int * rendezvous_func; struct vcpu* vcpu; } ;
struct vcpu {int mtx; int vlapic; scalar_t__ reqidle; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct vm*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct vcpu*,int *,char const*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct vm*,int) ;
 int FUNC_8 (struct vcpu*) ;
 int FUNC_9 (struct vm*,int,int ) ;
 scalar_t__ FUNC_10 (struct vm*,int) ;
 int FUNC_11 (struct vcpu*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (struct vm*,int) ;
 scalar_t__ FUNC_14 (struct vm*,int) ;
 int FUNC_15 (struct vm*,int ) ;
 int FUNC_16 (struct vm*,int,int ,int) ;

__attribute__((used)) static int
FUNC_17(struct vm *VAR_7, int VAR_8, bool VAR_9, bool *VAR_10)
{
 struct vcpu *VAR_11;
 const char *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_4(!FUNC_2(VAR_8, &VAR_7->halted_cpus), ("vcpu already halted"));

 VAR_11 = &VAR_7->vcpu[VAR_8];
 VAR_14 = 0;
 VAR_15 = 0;

 FUNC_8(VAR_11);
 while (1) {
  if (VAR_7->rendezvous_func != ((void*)0) || VAR_7->suspend || VAR_11->reqidle)
   break;
  if (FUNC_14(VAR_7, VAR_8))
   break;
  if (!VAR_9) {
   if (FUNC_13(VAR_7, VAR_8) ||
       FUNC_12(VAR_11->vlapic, ((void*)0))) {
    break;
   }
  }


  if (FUNC_10(VAR_7, VAR_8))
   break;

  if (FUNC_7(VAR_7, VAR_8))
   break;







  if (VAR_9) {
   VAR_12 = "vmhalt";
   FUNC_5(VAR_7, VAR_8, "Halted");
   if (!VAR_14 && VAR_4) {
    VAR_14 = 1;
    FUNC_3(VAR_8, &VAR_7->halted_cpus);
   }
   if (FUNC_1(&VAR_7->halted_cpus, &VAR_7->active_cpus) == 0) {
    VAR_15 = 1;
    break;
   }
  } else {
   VAR_12 = "vmidle";
  }

  VAR_13 = VAR_6;
  FUNC_9(VAR_7, VAR_8, VAR_2);




  FUNC_6(VAR_11, &VAR_11->mtx, VAR_12, VAR_5);
  FUNC_9(VAR_7, VAR_8, VAR_0);
  FUNC_16(VAR_7, VAR_8, VAR_1, VAR_6 - VAR_13);
 }

 if (VAR_14)
  FUNC_0(VAR_8, &VAR_7->halted_cpus);

 FUNC_11(VAR_11);

 if (VAR_15)
  FUNC_15(VAR_7, VAR_3);

 return (0);
}
