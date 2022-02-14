
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree_balance {int tb_sb; struct buffer_head** FEB; struct buffer_head** CFR; struct buffer_head** FR; struct buffer_head** R; scalar_t__* rnum; struct buffer_head** CFL; struct buffer_head** FL; struct buffer_head** L; scalar_t__* lnum; scalar_t__* insert_size; TYPE_1__* tb_path; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int path_length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tree_balance*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct buffer_head* FUNC_1 (TYPE_1__*,int) ;
 struct buffer_head* FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,struct buffer_head*) ;
 int FUNC_5 (int ,char*,char*,struct buffer_head*) ;
 int FUNC_6 (int ,struct buffer_head*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct tree_balance *VAR_5)
{
 struct buffer_head *VAR_6;



 int VAR_7;

 do {

  VAR_6 = ((void*)0);

  for (VAR_7 = VAR_5->tb_path->path_length;
       !VAR_6 && VAR_7 > VAR_1; VAR_7--) {
   if (FUNC_1(VAR_5->tb_path, VAR_7)) {
    if (!FUNC_4(VAR_5->tb_sb,
         FUNC_1
         (VAR_5->tb_path,
          VAR_7))) {
     VAR_6 =
         FUNC_1(VAR_5->tb_path,
        VAR_7);
    }
   }
  }

  for (VAR_7 = 0; !VAR_6 && VAR_7 < VAR_3 && VAR_5->insert_size[VAR_7];
       VAR_7++) {

   if (VAR_5->lnum[VAR_7]) {

    if (VAR_5->L[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->L[VAR_7],
              "L", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->L[VAR_7]))
      VAR_6 = VAR_5->L[VAR_7];
    }

    if (!VAR_6 && VAR_5->FL[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->FL[VAR_7],
              "FL", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->FL[VAR_7]))
      VAR_6 = VAR_5->FL[VAR_7];
    }

    if (!VAR_6 && VAR_5->CFL[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->CFL[VAR_7],
              "CFL", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->CFL[VAR_7]))
      VAR_6 = VAR_5->CFL[VAR_7];
    }

   }

   if (!VAR_6 && (VAR_5->rnum[VAR_7])) {

    if (VAR_5->R[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->R[VAR_7],
              "R", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->R[VAR_7]))
      VAR_6 = VAR_5->R[VAR_7];
    }

    if (!VAR_6 && VAR_5->FR[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->FR[VAR_7],
              "FR", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->FR[VAR_7]))
      VAR_6 = VAR_5->FR[VAR_7];
    }

    if (!VAR_6 && VAR_5->CFR[VAR_7]) {
     FUNC_6(VAR_5->tb_sb,
              VAR_5->CFR[VAR_7],
              "CFR", VAR_7);
     if (!FUNC_4
         (VAR_5->tb_sb, VAR_5->CFR[VAR_7]))
      VAR_6 = VAR_5->CFR[VAR_7];
    }
   }
  }
  for (VAR_7 = 0; !VAR_6 && VAR_7 < VAR_2; VAR_7++) {
   if (VAR_5->FEB[VAR_7]) {
    if (!FUNC_4
        (VAR_5->tb_sb, VAR_5->FEB[VAR_7]))
     VAR_6 = VAR_5->FEB[VAR_7];
   }
  }

  if (VAR_6) {
   FUNC_3(VAR_6);
   if (FUNC_0(VAR_5))
    return VAR_4;
  }

 } while (VAR_6);

 return VAR_0;
}
