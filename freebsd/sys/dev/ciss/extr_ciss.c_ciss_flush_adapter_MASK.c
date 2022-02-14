
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;
struct ciss_request {int dummy; } ;
struct ciss_bmic_flush_cache {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request**,int ,void**,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ciss_softc*,char*,int) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int*,int *) ;
 int FUNC_5 (struct ciss_request*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ciss_bmic_flush_cache*,int ) ;
 struct ciss_bmic_flush_cache* FUNC_8 (int,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct ciss_softc *VAR_6)
{
    struct ciss_request *VAR_7;
    struct ciss_bmic_flush_cache *VAR_8;
    int VAR_9, VAR_10;

    FUNC_6(1);

    VAR_7 = ((void*)0);
    VAR_8 = ((void*)0);






    if ((VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1, VAR_4 | VAR_5)) == ((void*)0)) {
 VAR_9 = VAR_3;
 goto out;
    }
    if ((VAR_9 = FUNC_0(VAR_6, &VAR_7, VAR_0,
           (void **)&VAR_8, sizeof(*VAR_8))) != 0)
 goto out;




    if ((VAR_9 = FUNC_5(VAR_7, 60 * 1000)) != 0) {
 FUNC_2(VAR_6, "error sending BMIC FLUSH_CACHE command (%d)\n", VAR_9);
 goto out;
    }




    FUNC_4(VAR_7, &VAR_10, ((void*)0));
    switch(VAR_10) {
    case 128:
 break;
    default:
 FUNC_2(VAR_6, "error flushing cache (%s)\n",
      FUNC_1(VAR_10));
 VAR_9 = VAR_2;
 goto out;
    }

out:
    if (VAR_8 != ((void*)0))
 FUNC_7(VAR_8, VAR_1);
    if (VAR_7 != ((void*)0))
 FUNC_3(VAR_7);
    return(VAR_9);
}
