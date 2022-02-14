
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int flags; } ;
struct cred {int dummy; } ;
typedef scalar_t__ key_serial_t ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (int ) ;
 struct key* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 struct cred* FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,void*,int ,struct cred const*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

struct key *FUNC_8(key_serial_t VAR_6)
{
 const struct cred *VAR_7 = FUNC_3();
 struct key *VAR_8;
 key_ref_t VAR_9;

 VAR_9 = FUNC_6(
  &VAR_5,
  (void *) (unsigned long) VAR_6,
  VAR_4,
  VAR_7);

 if (FUNC_2(VAR_9)) {
  VAR_8 = FUNC_0(VAR_9);
  if (VAR_8 == FUNC_1(-VAR_0))
   VAR_8 = FUNC_1(-VAR_2);
  goto error;
 }

 VAR_8 = FUNC_5(VAR_9);
 if (FUNC_7(VAR_3, &VAR_8->flags)) {
  FUNC_4(VAR_8);
  VAR_8 = FUNC_1(-VAR_1);
 }

error:
 return VAR_8;
}
