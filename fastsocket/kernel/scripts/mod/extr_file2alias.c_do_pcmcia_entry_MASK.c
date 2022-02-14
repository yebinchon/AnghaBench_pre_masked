
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device_id {int match_flags; int manf_id; int card_id; int func_id; int function; int device_no; int* prod_id_hash; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_9,
      struct pcmcia_device_id *VAR_10, char *VAR_11)
{
 unsigned int VAR_12;

 VAR_10->match_flags = FUNC_1(VAR_10->match_flags);
 VAR_10->manf_id = FUNC_1(VAR_10->manf_id);
 VAR_10->card_id = FUNC_1(VAR_10->card_id);
 VAR_10->func_id = FUNC_1(VAR_10->func_id);
 VAR_10->function = FUNC_1(VAR_10->function);
 VAR_10->device_no = FUNC_1(VAR_10->device_no);

 for (VAR_12=0; VAR_12<4; VAR_12++) {
  VAR_10->prod_id_hash[VAR_12] = FUNC_1(VAR_10->prod_id_hash[VAR_12]);
       }

       FUNC_3(VAR_11, "pcmcia:");
       FUNC_0(VAR_11, "m", VAR_10->match_flags & VAR_4,
    VAR_10->manf_id);
       FUNC_0(VAR_11, "c", VAR_10->match_flags & VAR_0,
    VAR_10->card_id);
       FUNC_0(VAR_11, "f", VAR_10->match_flags & VAR_3,
    VAR_10->func_id);
       FUNC_0(VAR_11, "fn", VAR_10->match_flags & VAR_2,
    VAR_10->function);
       FUNC_0(VAR_11, "pfn", VAR_10->match_flags & VAR_1,
    VAR_10->device_no);
       FUNC_0(VAR_11, "pa", VAR_10->match_flags & VAR_5, VAR_10->prod_id_hash[0]);
       FUNC_0(VAR_11, "pb", VAR_10->match_flags & VAR_6, VAR_10->prod_id_hash[1]);
       FUNC_0(VAR_11, "pc", VAR_10->match_flags & VAR_7, VAR_10->prod_id_hash[2]);
       FUNC_0(VAR_11, "pd", VAR_10->match_flags & VAR_8, VAR_10->prod_id_hash[3]);

 FUNC_2(VAR_11);
       return 1;
}
