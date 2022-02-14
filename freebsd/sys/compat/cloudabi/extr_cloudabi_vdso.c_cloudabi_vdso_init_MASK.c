
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
struct sysentvec {size_t sv_shared_page_len; scalar_t__ sv_shared_page_base; scalar_t__ sv_usrstack; int sv_shared_page_obj; scalar_t__ sv_maxuser; } ;
struct TYPE_4__ {int valid; } ;


 int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_3 (size_t,size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (scalar_t__,size_t) ;
 int FUNC_6 (void*,char*,int ) ;
 int FUNC_7 (scalar_t__,TYPE_1__**,int) ;
 int FUNC_8 (scalar_t__,int) ;
 TYPE_1__* FUNC_9 (int ,size_t,int) ;
 int FUNC_10 (int ,int ,size_t,int ,int ,int *) ;

void
FUNC_11(struct sysentvec *VAR_6, char *VAR_7, char *VAR_8)
{
 vm_page_t VAR_9;
 vm_object_t VAR_10;
 vm_offset_t VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;


 VAR_15 = VAR_8 - VAR_7;
 VAR_13 = FUNC_3(VAR_15, VAR_1);
 VAR_14 = VAR_13 * VAR_1;


 VAR_10 = FUNC_10(VAR_0, 0, VAR_14,
     VAR_5, 0, ((void*)0));
 VAR_11 = FUNC_4(VAR_1);
 for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
  FUNC_1(VAR_10);
  VAR_9 = FUNC_9(VAR_10, VAR_12, VAR_2 | VAR_3);
  VAR_9->valid = VAR_4;
  FUNC_2(VAR_10);

  FUNC_7(VAR_11, &VAR_9, 1);
  FUNC_6((void *)VAR_11, VAR_7 + VAR_12 * VAR_1,
      FUNC_0(VAR_15 - VAR_12 * VAR_1, VAR_1));
  FUNC_8(VAR_11, 1);
 }
 FUNC_5(VAR_11, VAR_1);





 VAR_6->sv_shared_page_base = VAR_6->sv_maxuser - VAR_14;
 VAR_6->sv_shared_page_len = VAR_14;
 VAR_6->sv_shared_page_obj = VAR_10;
 VAR_6->sv_usrstack = VAR_6->sv_shared_page_base;
}
