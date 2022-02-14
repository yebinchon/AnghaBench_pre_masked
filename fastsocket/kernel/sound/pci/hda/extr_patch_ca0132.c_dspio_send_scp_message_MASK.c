
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scp_msg {int data; int hdr; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {unsigned int wait_scp_header; unsigned int wait_num_data; int wait_scp; int scp_resp_count; int * scp_resp_data; int scp_resp_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,unsigned int*,int *,unsigned int*,int *,int *,unsigned int*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (unsigned char*,int ,unsigned int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_3,
      unsigned char *VAR_4,
      unsigned int VAR_5,
      unsigned char *VAR_6,
      unsigned int VAR_7,
      unsigned int *VAR_8)
{
 struct ca0132_spec *VAR_9 = VAR_3->spec;
 int VAR_10 = -1;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 bool VAR_13 = 0;
 unsigned int VAR_14;
 struct scp_msg *VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 if (VAR_8)
  *VAR_8 = 0;


 VAR_14 = *((unsigned int *)VAR_4);
 FUNC_1(VAR_14, &VAR_20, &VAR_19, &VAR_21, ((void*)0),
      &VAR_22, ((void*)0), ((void*)0), &VAR_18);
 VAR_11 = VAR_18 + 1;
 VAR_12 = (VAR_11 * 4);

 if (VAR_5 < VAR_12)
  return -VAR_0;

 if (VAR_21 || VAR_22) {
  if (!VAR_6 || VAR_7 < 4 || !VAR_8)
   return -VAR_0;

  VAR_9->wait_scp_header = *((unsigned int *)VAR_4);


  VAR_17 = VAR_19;
  VAR_16 = VAR_20;
  VAR_9->wait_scp_header &= 0xffff0000;
  VAR_9->wait_scp_header |= (VAR_16 << 8) | (VAR_17);
  VAR_9->wait_num_data = VAR_7/sizeof(unsigned int) - 1;
  VAR_9->wait_scp = 1;
  VAR_13 = 1;
 }

 VAR_10 = FUNC_0(VAR_3, (unsigned int *)VAR_4,
          VAR_11);
 if (VAR_10 < 0) {
  VAR_9->wait_scp = 0;
  return VAR_10;
 }

 if (VAR_13) {
  unsigned long VAR_23 = VAR_2 + FUNC_4(1000);
  FUNC_3(VAR_6, 0, VAR_7);
  do {
   FUNC_5(20);
  } while (VAR_9->wait_scp && FUNC_6(VAR_2, VAR_23));
  VAR_13 = 0;
  if (!VAR_9->wait_scp) {
   VAR_15 = (struct scp_msg *)VAR_6;
   FUNC_2(&VAR_15->hdr, &VAR_9->scp_resp_header, 4);
   FUNC_2(&VAR_15->data, VAR_9->scp_resp_data,
          VAR_9->wait_num_data);
   *VAR_8 = (VAR_9->scp_resp_count + 1) * 4;
   VAR_10 = 0;
  } else {
   VAR_10 = -VAR_1;
  }
  VAR_9->wait_scp = 0;
 }

 return VAR_10;
}
