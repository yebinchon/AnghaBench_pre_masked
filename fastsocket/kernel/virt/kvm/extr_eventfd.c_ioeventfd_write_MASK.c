
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_device {int dummy; } ;
struct _ioeventfd {int eventfd; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct _ioeventfd*,int ,int,void const*) ;
 struct _ioeventfd* FUNC_2 (struct kvm_io_device*) ;

__attribute__((used)) static int
FUNC_3(struct kvm_io_device *VAR_1, gpa_t VAR_2, int VAR_3,
  const void *VAR_4)
{
 struct _ioeventfd *VAR_5 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4))
  return -VAR_0;

 FUNC_0(VAR_5->eventfd, 1);
 return 0;
}
