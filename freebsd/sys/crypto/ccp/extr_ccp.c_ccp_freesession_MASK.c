
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_session {scalar_t__ pending; int active; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 struct ccp_session* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,struct ccp_session*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, crypto_session_t VAR_1)
{
 struct ccp_session *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->pending != 0)
  FUNC_1(VAR_0,
      "session %p freed with %d pending requests\n", VAR_2,
      VAR_2->pending);
 VAR_2->active = 0;
}
