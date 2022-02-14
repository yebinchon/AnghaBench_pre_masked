
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_max_fibs_alloc; int aac_fib_dmat; int aac_buffer_dmat; int total_fibs; int aac_fibmap_tqh; } ;
struct aac_fibmap {int aac_fibmap; int aac_fibs; struct aac_command* aac_commands; } ;
struct aac_command {int cm_datamap; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct aac_fibmap* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aac_fibmap*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct aac_fibmap*,int ) ;
 int FUNC_6 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_7(struct aac_softc *VAR_3)
{
 struct aac_fibmap *VAR_4;
 struct aac_command *VAR_5;
 int VAR_6;

 FUNC_6(VAR_3, VAR_0, "");

 while ((VAR_4 = FUNC_0(&VAR_3->aac_fibmap_tqh)) != ((void*)0)) {

  FUNC_1(&VAR_3->aac_fibmap_tqh, VAR_4, VAR_2);




  for (VAR_6 = 0; VAR_6 < VAR_3->aac_max_fibs_alloc && VAR_3->total_fibs--; VAR_6++) {
   VAR_5 = VAR_4->aac_commands + VAR_6;
   FUNC_2(VAR_3->aac_buffer_dmat, VAR_5->cm_datamap);
  }
  FUNC_3(VAR_3->aac_fib_dmat, VAR_4->aac_fibmap);
  FUNC_4(VAR_3->aac_fib_dmat, VAR_4->aac_fibs, VAR_4->aac_fibmap);
  FUNC_5(VAR_4, VAR_1);
 }
}
