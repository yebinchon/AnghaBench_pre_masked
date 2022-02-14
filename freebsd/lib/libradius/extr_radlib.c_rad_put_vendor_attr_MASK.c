
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vendor_attribute {int attrib_type; size_t attrib_len; int attrib_data; int vendor_value; } ;
struct rad_handle {int chap_pass; int out_created; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vendor_attribute*) ;
 int FUNC_1 (struct rad_handle*,char*,...) ;
 int FUNC_2 (int) ;
 struct vendor_attribute* FUNC_3 (size_t) ;
 int FUNC_4 (int ,void const*,size_t) ;
 int FUNC_5 (struct rad_handle*,int ,struct vendor_attribute*,size_t) ;

int
FUNC_6(struct rad_handle *VAR_4, int VAR_5, int VAR_6,
    const void *VAR_7, size_t VAR_8)
{
 struct vendor_attribute *VAR_9;
 int VAR_10;

 if (!VAR_4->out_created) {
  FUNC_1(VAR_4, "Please call rad_create_request()"
      " before putting attributes");
  return -1;
 }

 if ((VAR_9 = FUNC_3(VAR_8 + 6)) == ((void*)0)) {
  FUNC_1(VAR_4, "malloc failure (%zu bytes)", VAR_8 + 6);
  return -1;
 }

 VAR_9->vendor_value = FUNC_2(VAR_5);
 VAR_9->attrib_type = VAR_6;
 VAR_9->attrib_len = VAR_8 + 2;
 FUNC_4(VAR_9->attrib_data, VAR_7, VAR_8);

 VAR_10 = FUNC_5(VAR_4, VAR_3, VAR_9, VAR_8 + 6);
 FUNC_0(VAR_9);
 if (VAR_10 == 0 && VAR_5 == VAR_2
     && (VAR_6 == VAR_1
     || VAR_6 == VAR_0)) {
  VAR_4->chap_pass = 1;
 }
 return (VAR_10);
}
