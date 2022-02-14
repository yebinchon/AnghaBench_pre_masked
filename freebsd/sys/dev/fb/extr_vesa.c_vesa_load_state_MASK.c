
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t va_buffer_size; int va_mode; int va_initial_mode; scalar_t__ va_buffer; } ;
typedef TYPE_1__ video_adapter_t ;
struct TYPE_10__ {scalar_t__ sig; int regs; } ;
typedef TYPE_2__ adp_state_t ;
struct TYPE_11__ {int (* load_state ) (TYPE_1__*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,void*,size_t) ;
 int FUNC_2 (int *,int ) ;
 TYPE_8__* VAR_3 ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_8(video_adapter_t *VAR_6, void *VAR_7)
{
 void *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 != VAR_4)
  return ((*VAR_3->load_state)(VAR_6, VAR_7));


 (void)FUNC_5();
 VAR_9 = VAR_6->va_buffer_size;
 VAR_11 = VAR_6->va_mode;
 VAR_10 = FUNC_7(VAR_6, VAR_6->va_initial_mode);
 if (VAR_11 != VAR_6->va_initial_mode)
  VAR_10 = FUNC_7(VAR_6, VAR_11);

 if (VAR_5 != ((void*)0)) {
  if (VAR_10 == 0 && FUNC_0(VAR_11)) {
   VAR_8 = (void *)VAR_6->va_buffer;
   if (VAR_8 != ((void*)0))
    FUNC_1(VAR_5, VAR_8, VAR_9);
  }
  FUNC_2(VAR_5, VAR_0);
  VAR_5 = ((void*)0);
 }
 if (((adp_state_t *)VAR_7)->sig != VAR_2)
  return ((*VAR_3->load_state)(VAR_6, VAR_7));
 return (FUNC_6(VAR_1, ((adp_state_t *)VAR_7)->regs));
}
