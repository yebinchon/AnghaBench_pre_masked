
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid6_recov_calls {char* name; int datap; int data2; int (* valid ) () ;} ;
struct raid6_calls {int (* gen_syndrome ) (int,int,void**) ;scalar_t__ (* valid ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 struct raid6_calls** VAR_5 ;
 struct raid6_calls VAR_6 ;
 int VAR_7 ;
 struct raid6_recov_calls** VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,int,void**) ;
 scalar_t__ FUNC_7 (int,int) ;

int FUNC_8(int VAR_9, char *VAR_10[])
{
 const struct raid6_calls *const *VAR_11;
 const struct raid6_recov_calls *const *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_0();

 for (VAR_12 = VAR_8; *VAR_12; VAR_12++) {
  if ((*VAR_12)->valid && !(*VAR_12)->valid())
   continue;
  VAR_4 = (*VAR_12)->data2;
  VAR_7 = (*VAR_12)->datap;

  FUNC_2("using recovery %s\n", (*VAR_12)->name);

  for (VAR_11 = VAR_5; *VAR_11; VAR_11++) {
   if (!(*VAR_11)->valid || (*VAR_11)->valid()) {
    VAR_6 = **VAR_11;


    FUNC_1(VAR_2[VAR_0-2], 0xee, 2*VAR_1);


    VAR_6.gen_syndrome(VAR_0, VAR_1,
       (void **)&VAR_3);

    for (VAR_13 = 0; VAR_13 < VAR_0-1; VAR_13++)
     for (VAR_14 = VAR_13+1; VAR_14 < VAR_0; VAR_14++)
      VAR_15 += FUNC_7(VAR_13, VAR_14);
   }
  }
  FUNC_2("\n");
 }

 FUNC_2("\n");

 FUNC_3();

 if (VAR_15)
  FUNC_2("\n*** ERRORS FOUND ***\n");

 return VAR_15;
}
