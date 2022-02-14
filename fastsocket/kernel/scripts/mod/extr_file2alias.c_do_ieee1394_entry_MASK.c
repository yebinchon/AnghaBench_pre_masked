
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee1394_device_id {int match_flags; int vendor_id; int model_id; int specifier_id; int version; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4,
        struct ieee1394_device_id *VAR_5, char *VAR_6)
{
 VAR_5->match_flags = FUNC_1(VAR_5->match_flags);
 VAR_5->vendor_id = FUNC_1(VAR_5->vendor_id);
 VAR_5->model_id = FUNC_1(VAR_5->model_id);
 VAR_5->specifier_id = FUNC_1(VAR_5->specifier_id);
 VAR_5->version = FUNC_1(VAR_5->version);

 FUNC_3(VAR_6, "ieee1394:");
 FUNC_0(VAR_6, "ven", VAR_5->match_flags & VAR_2,
     VAR_5->vendor_id);
 FUNC_0(VAR_6, "mo", VAR_5->match_flags & VAR_0,
     VAR_5->model_id);
 FUNC_0(VAR_6, "sp", VAR_5->match_flags & VAR_1,
     VAR_5->specifier_id);
 FUNC_0(VAR_6, "ver", VAR_5->match_flags & VAR_3,
     VAR_5->version);

 FUNC_2(VAR_6);
 return 1;
}
