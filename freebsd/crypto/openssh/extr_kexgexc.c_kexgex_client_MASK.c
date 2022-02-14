
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ssh {struct kex* kex; } ;
struct kex {int dh_need; int min; int max; int nbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int VAR_6 ;
 int FUNC_4 (struct ssh*,int ,int *) ;
 int FUNC_5 (struct ssh*,int) ;
 int FUNC_6 (struct ssh*) ;
 int FUNC_7 (struct ssh*,int ) ;
 int VAR_7 ;

int
FUNC_8(struct ssh *VAR_8)
{
 struct kex *VAR_9 = VAR_8->kex;
 int VAR_10;
 u_int VAR_11;

 VAR_11 = FUNC_2(VAR_9->dh_need * 8);

 VAR_9->min = VAR_1;
 VAR_9->max = VAR_0;
 VAR_9->nbits = VAR_11;
 if (VAR_5 & VAR_4)
  VAR_9->nbits = FUNC_0(VAR_9->nbits, 4096);

 if ((VAR_10 = FUNC_7(VAR_8, VAR_3)) != 0 ||
     (VAR_10 = FUNC_5(VAR_8, VAR_9->min)) != 0 ||
     (VAR_10 = FUNC_5(VAR_8, VAR_9->nbits)) != 0 ||
     (VAR_10 = FUNC_5(VAR_8, VAR_9->max)) != 0 ||
     (VAR_10 = FUNC_6(VAR_8)) != 0)
  goto out;
 FUNC_1("SSH2_MSG_KEX_DH_GEX_REQUEST(%u<%u<%u) sent",
     VAR_9->min, VAR_9->nbits, VAR_9->max);




 FUNC_4(VAR_8, VAR_2,
     &VAR_6);
 VAR_10 = 0;
 out:
 return VAR_10;
}
