
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct iic_cdevpriv {int sc; int lock; } ;
struct cdev {int si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iic_cdevpriv*,int ) ;
 int FUNC_1 (struct iic_cdevpriv*,int ) ;
 int VAR_3 ;
 struct iic_cdevpriv* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct iic_cdevpriv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);

 FUNC_3(&VAR_8->lock, "iic");
 VAR_8->sc = VAR_4->si_drv1;

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 if (VAR_9 != 0)
  FUNC_1(VAR_8, VAR_0);

 return (VAR_9);
}
