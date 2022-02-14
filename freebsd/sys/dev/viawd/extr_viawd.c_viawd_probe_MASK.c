
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viawd_device {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct viawd_device* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct viawd_device *VAR_2;

 VAR_2 = FUNC_3(FUNC_1(VAR_1));
 FUNC_0(VAR_2 != ((void*)0), ("parent should be a valid VIA SB"));
 FUNC_2(VAR_1, VAR_2->desc);
 return (VAR_0);
}
