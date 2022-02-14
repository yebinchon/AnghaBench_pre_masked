
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_softc {int sc_cmd_buf_free; int sc_mtx; int sc_cv; } ;
struct udl_cmd_buf {scalar_t__ off; } ;


 int VAR_0 ;
 struct udl_cmd_buf* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct udl_cmd_buf*,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct udl_cmd_buf *
FUNC_3(struct udl_softc *VAR_2, int VAR_3)
{
 struct udl_cmd_buf *VAR_4;

 while ((VAR_4 = FUNC_0(&VAR_2->sc_cmd_buf_free)) == ((void*)0)) {
  if (VAR_3 != VAR_0)
   break;
  FUNC_2(&VAR_2->sc_cv, &VAR_2->sc_mtx);
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_1(&VAR_2->sc_cmd_buf_free, VAR_4, VAR_1);
  VAR_4->off = 0;
 }
 return (VAR_4);
}
