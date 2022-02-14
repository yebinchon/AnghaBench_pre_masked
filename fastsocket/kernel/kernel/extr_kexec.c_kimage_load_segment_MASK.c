
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int type; } ;
struct kexec_segment {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct kimage*,struct kexec_segment*) ;
 int FUNC_1 (struct kimage*,struct kexec_segment*) ;

__attribute__((used)) static int FUNC_2(struct kimage *VAR_1,
    struct kexec_segment *VAR_2)
{
 int VAR_3 = -VAR_0;

 switch (VAR_1->type) {
 case 128:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 }

 return VAR_3;
}
