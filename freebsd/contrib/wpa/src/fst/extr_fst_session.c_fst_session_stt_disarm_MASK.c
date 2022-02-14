
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_session {scalar_t__ stt_armed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,struct fst_session*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct fst_session *VAR_2)
{
 if (VAR_2->stt_armed) {
  FUNC_0(VAR_1, ((void*)0), VAR_2);
  VAR_2->stt_armed = VAR_0;
 }
}
