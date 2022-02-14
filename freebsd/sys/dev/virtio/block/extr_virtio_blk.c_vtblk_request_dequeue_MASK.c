
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_req_free; } ;
struct vtblk_request {int dummy; } ;


 struct vtblk_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vtblk_request*,int ) ;
 int FUNC_2 (struct vtblk_request*,int) ;
 int VAR_0 ;

__attribute__((used)) static struct vtblk_request *
FUNC_3(struct vtblk_softc *VAR_1)
{
 struct vtblk_request *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->vtblk_req_free);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(&VAR_1->vtblk_req_free, VAR_2, VAR_0);
  FUNC_2(VAR_2, sizeof(struct vtblk_request));
 }

 return (VAR_2);
}
