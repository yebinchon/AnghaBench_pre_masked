
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kerneldumpcomp {int kdc_format; void* kdc_buf; int * kdc_stream; } ;
struct dumperinfo {int maxiosize; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int,int,int ,struct dumperinfo*) ;
 int FUNC_1 (struct kerneldumpcomp*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static struct kerneldumpcomp *
FUNC_3(struct dumperinfo *VAR_8, uint8_t VAR_9)
{
 struct kerneldumpcomp *VAR_10;
 int VAR_11;

 switch (VAR_9) {
 case 129:
  VAR_11 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_1;
  break;
 default:
  return (((void*)0));
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2, VAR_4 | VAR_5);
 VAR_10->kdc_format = VAR_9;
 VAR_10->kdc_stream = FUNC_0(VAR_7,
     VAR_11, VAR_8->maxiosize, VAR_6, VAR_8);
 if (VAR_10->kdc_stream == ((void*)0)) {
  FUNC_1(VAR_10, VAR_2);
  return (((void*)0));
 }
 VAR_10->kdc_buf = FUNC_2(VAR_8->maxiosize, VAR_2, VAR_4 | VAR_3);
 return (VAR_10);
}
