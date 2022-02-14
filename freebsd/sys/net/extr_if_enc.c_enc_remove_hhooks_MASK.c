
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookinfo {void* hook_type; int hook_id; struct enc_softc* hook_udata; int * hook_helper; int hook_func; } ;
struct enc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct hookinfo*) ;

__attribute__((used)) static void
FUNC_1(struct enc_softc *VAR_9)
{
 struct hookinfo VAR_10;

 VAR_10.hook_func = VAR_8;
 VAR_10.hook_helper = ((void*)0);
 VAR_10.hook_udata = VAR_9;
}
