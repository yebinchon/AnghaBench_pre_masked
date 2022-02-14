
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snp_softc {int snp_outwait; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct snp_softc*,int ) ;
 struct snp_softc* FUNC_2 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct snp_softc *VAR_8;


 VAR_8 = FUNC_2(sizeof(struct snp_softc), VAR_0, VAR_1|VAR_2);
 FUNC_0(&VAR_8->snp_outwait, "snp out");

 FUNC_1(VAR_8, VAR_3);

 return (0);
}
