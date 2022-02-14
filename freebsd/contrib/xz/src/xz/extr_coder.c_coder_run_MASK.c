
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ st_size; } ;
struct TYPE_15__ {TYPE_1__ src_st; } ;
typedef TYPE_2__ file_pair ;
typedef enum coder_init_ret { ____Placeholder_coder_init_ret } coder_init_ret ;
struct TYPE_17__ {int * u8; } ;
struct TYPE_16__ {scalar_t__ avail_in; int * next_in; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_6__ VAR_6 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,scalar_t__ const) ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;

extern void
FUNC_11(const char *VAR_10)
{

 FUNC_7(VAR_10);


 file_pair *VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 == ((void*)0))
  return;


 bool VAR_12 = 0;

 if (VAR_7 == VAR_3) {
  VAR_8.next_in = ((void*)0);
  VAR_8.avail_in = 0;
 } else {


  VAR_8.next_in = VAR_6.u8;
  VAR_8.avail_in = FUNC_6(VAR_11, &VAR_6, VAR_2);
 }

 if (VAR_8.avail_in != VAR_5) {






  const enum coder_init_ret VAR_13 = FUNC_0(VAR_11);

  if (VAR_13 != VAR_0 && !VAR_9) {


   if (VAR_7 == VAR_4 || !FUNC_4(VAR_11)) {



    FUNC_10();


    const uint64_t VAR_14
      = VAR_11->src_st.st_size <= 0
      ? 0 : VAR_11->src_st.st_size;
    FUNC_9(&VAR_8, VAR_14);


    if (VAR_13 == VAR_1)
     VAR_12 = FUNC_1(VAR_11);
    else
     VAR_12 = FUNC_2(VAR_11);

    FUNC_8(VAR_12);
   }
  }
 }



 FUNC_3(VAR_11, VAR_12);

 return;
}
