
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ssh {struct kex* kex; } ;
struct kex {int flags; int my; scalar_t__ done; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct ssh*,int ) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (struct ssh*,int ) ;

int
FUNC_7(struct ssh *VAR_5)
{
 u_char *VAR_6;
 struct kex *VAR_7 = VAR_5->kex;
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return VAR_3;
 if (VAR_7->flags & VAR_1)
  return 0;
 VAR_7->done = 0;


 if (FUNC_2(VAR_7->my) < VAR_0)
  return VAR_4;
 if ((VAR_6 = FUNC_3(VAR_7->my)) == ((void*)0))
  return VAR_3;
 FUNC_0(VAR_6, VAR_0);

 if ((VAR_8 = FUNC_6(VAR_5, VAR_2)) != 0 ||
     (VAR_8 = FUNC_4(VAR_5, VAR_7->my)) != 0 ||
     (VAR_8 = FUNC_5(VAR_5)) != 0)
  return VAR_8;
 FUNC_1("SSH2_MSG_KEXINIT sent");
 VAR_7->flags |= VAR_1;
 return 0;
}
