
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int flags; int aac_dev; } ;
struct aac_mntinforesp {int dummy; } ;
struct aac_mntinfo {int MntCount; int MntType; int Command; } ;
struct aac_fib {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static struct aac_mntinforesp *
FUNC_2(struct aac_softc *VAR_5, struct aac_fib *VAR_6, int VAR_7)
{
 struct aac_mntinfo *VAR_8;

 VAR_8 = (struct aac_mntinfo *)&VAR_6->data[0];

 VAR_8->Command = (VAR_5->flags & VAR_0) ?
     VAR_4 : VAR_3;
 VAR_8->MntType = VAR_2;
 VAR_8->MntCount = VAR_7;

 if (FUNC_0(VAR_5, VAR_1, 0, VAR_6,
    sizeof(struct aac_mntinfo))) {
  FUNC_1(VAR_5->aac_dev, "Error probing container %d\n", VAR_7);
  return (((void*)0));
 }

 return ((struct aac_mntinforesp *)&VAR_6->data[0]);
}
