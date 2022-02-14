
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookinfo {void* hook_type; int hook_id; struct enc_softc* hook_udata; int * hook_helper; int hook_func; } ;
struct enc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,struct hookinfo*,int ) ;

__attribute__((used)) static int
FUNC_1(struct enc_softc *VAR_11)
{
 struct hookinfo VAR_12;
 int VAR_13;

 VAR_13 = VAR_2;
 VAR_12.hook_func = VAR_10;
 VAR_12.hook_helper = ((void*)0);
 VAR_12.hook_udata = VAR_11;
 return (VAR_13);
}
