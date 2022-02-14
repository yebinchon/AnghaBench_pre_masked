
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint64_t ;
struct sec_action {int copy; int remove; int rename; char* newname; } ;
struct elfcopy {char* debuglink; char* prefix_alloc; char* prefix_sec; char* prefix_sym; int flags; int strip; int srec_len; void* set_start; void* pad_to; int fill; void* change_start; void* change_addr; } ;
typedef void* int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct elfcopy*,char*) ;
 int FUNC_1 (struct elfcopy*,char*,char*,int ) ;
 int FUNC_2 (struct elfcopy*,char const*,char const*) ;
 int VAR_28 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char**,char*,int ,int *) ;
 struct sec_action* FUNC_6 (struct elfcopy*,char*,int) ;
 char* VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_7 (struct elfcopy*,int,char*,char*) ;
 int FUNC_8 (struct sec_action*,char*) ;
 int FUNC_9 (struct elfcopy*,char*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct elfcopy*,char*) ;
 int FUNC_12 (struct elfcopy*,char*) ;
 int FUNC_13 (struct elfcopy*,char*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*,int *,int ) ;
 int FUNC_16 (char*,int *,int ) ;
 int FUNC_17 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_18(struct elfcopy *VAR_31, int VAR_32, char **VAR_33)
{
 struct sec_action *VAR_34;
 const char *VAR_35, *VAR_36;
 char *VAR_37, *VAR_38;
 int VAR_39;

 while ((VAR_39 = FUNC_5(VAR_32, VAR_33, "dB:gG:I:j:K:L:N:O:pR:s:SwW:xXV",
     VAR_28, ((void*)0))) != -1) {
  switch(VAR_39) {
  case 'B':

   break;
  case 'R':
   VAR_34 = FUNC_6(VAR_31, VAR_29, 1);
   if (VAR_34->copy != 0)
    FUNC_4(VAR_2,
        "both copy and remove specified");
   VAR_34->remove = 1;
   VAR_31->flags |= VAR_9;
   break;
  case 'S':
   VAR_31->strip = VAR_13;
   break;
  case 'g':
   VAR_31->strip = VAR_14;
   break;
  case 'G':
   VAR_31->flags |= VAR_4;
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_21);
   break;
  case 'I':
  case 's':
   FUNC_11(VAR_31, VAR_29);
   break;
  case 'j':
   VAR_34 = FUNC_6(VAR_31, VAR_29, 1);
   if (VAR_34->remove != 0)
    FUNC_4(VAR_2,
        "both copy and remove specified");
   VAR_34->copy = 1;
   VAR_31->flags |= VAR_8;
   break;
  case 'K':
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_20);
   break;
  case 'L':
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_22);
   break;
  case 'N':
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_24);
   break;
  case 'O':
   FUNC_13(VAR_31, VAR_29);
   break;
  case 'p':
   VAR_31->flags |= VAR_7;
   break;
  case 'V':
   FUNC_10();
   break;
  case 'w':
   VAR_31->flags |= VAR_27;
   break;
  case 'W':
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_25);
   break;
  case 'x':
   VAR_31->flags |= VAR_1;
   break;
  case 'X':
   VAR_31->flags |= VAR_0;
   break;
  case 162:
   VAR_31->debuglink = VAR_29;
   break;
  case 161:
   FUNC_0(VAR_31, VAR_29);
   break;
  case 160:
   VAR_31->change_addr = (int64_t) FUNC_15(VAR_29, ((void*)0), 0);
   break;
  case 159:
   FUNC_7(VAR_31, VAR_39, "--change-section-addr",
       VAR_29);
   break;
  case 158:
   FUNC_7(VAR_31, VAR_39, "--change-section-lma",
       VAR_29);
   break;
  case 157:
   FUNC_7(VAR_31, VAR_39, "--change-section-vma",
       VAR_29);
   break;
  case 156:
   VAR_31->change_start = (int64_t) FUNC_15(VAR_29, ((void*)0), 0);
   break;
  case 155:

   break;
  case 154:
   VAR_31->fill = (uint8_t) FUNC_16(VAR_29, ((void*)0), 0);
   VAR_31->flags |= VAR_3;
   break;
  case 153:
   FUNC_1(VAR_31, VAR_29, ((void*)0), VAR_19);
   break;
  case 152:
   FUNC_9(VAR_31, VAR_29, VAR_19);
   break;
  case 150:
   FUNC_9(VAR_31, VAR_29, VAR_20);
   break;
  case 151:
   FUNC_9(VAR_31, VAR_29, VAR_21);
   break;
  case 149:
   VAR_31->flags |= VAR_5;
   break;
  case 148:
   FUNC_9(VAR_31, VAR_29, VAR_22);
   break;
  case 147:
   VAR_31->flags |= VAR_6;
   break;
  case 146:
   VAR_31->strip = VAR_16;
   break;
  case 145:
   VAR_31->strip = VAR_17;
   break;
  case 144:
   VAR_31->pad_to = (uint64_t) FUNC_17(VAR_29, ((void*)0), 0);
   break;
  case 143:
   VAR_31->prefix_alloc = VAR_29;
   break;
  case 142:
   VAR_31->prefix_sec = VAR_29;
   break;
  case 141:
   VAR_31->prefix_sym = VAR_29;
   break;
  case 140:
   if ((VAR_38 = FUNC_14(VAR_29, '=')) == ((void*)0))
    FUNC_4(VAR_2,
        "illegal format for --redefine-sym");
   *VAR_38++ = '\0';
   FUNC_1(VAR_31, VAR_29, VAR_38, VAR_23);
   break;
  case 139:
   FUNC_9(VAR_31, VAR_29, VAR_23);
   break;
  case 138:
   if ((VAR_37 = FUNC_14(VAR_29, '=')) == ((void*)0))
    FUNC_4(VAR_2,
        "illegal format for --rename-section");
   *VAR_37++ = '\0';


   if ((VAR_38 = FUNC_14(VAR_37, ',')) != ((void*)0))
    *VAR_38++ = '\0';

   VAR_34 = FUNC_6(VAR_31, VAR_29, 1);
   VAR_34->rename = 1;
   VAR_34->newname = VAR_37;
   if (VAR_38 != ((void*)0))
    FUNC_8(VAR_34, VAR_38);
   break;
  case 137:
   FUNC_12(VAR_31, VAR_29);
   break;
  case 136:
   if ((VAR_38 = FUNC_14(VAR_29, '=')) == ((void*)0))
    FUNC_4(VAR_2,
        "illegal format for --set-section-flags");
   *VAR_38++ = '\0';
   VAR_34 = FUNC_6(VAR_31, VAR_29, 1);
   FUNC_8(VAR_34, VAR_38);
   break;
  case 135:
   VAR_31->flags |= VAR_10;
   VAR_31->set_start = (uint64_t) FUNC_17(VAR_29, ((void*)0), 0);
   break;
  case 134:
   VAR_31->flags |= VAR_12;
   break;
  case 133:
   VAR_31->flags |= VAR_11;
   VAR_31->srec_len = FUNC_16(VAR_29, ((void*)0), 0);
   break;
  case 132:
   VAR_31->strip = VAR_15;
   break;
  case 131:
   FUNC_9(VAR_31, VAR_29, VAR_24);
   break;
  case 130:
   VAR_31->strip = VAR_18;
   break;
  case 129:
   VAR_31->flags |= VAR_26;
   break;
  case 128:
   FUNC_9(VAR_31, VAR_29, VAR_25);
   break;
  default:
   FUNC_3();
  }
 }

 VAR_32 -= VAR_30;
 VAR_33 += VAR_30;

 if (VAR_32 == 0 || VAR_32 > 2)
  FUNC_3();

 VAR_35 = VAR_33[0];
 VAR_36 = ((void*)0);
 if (VAR_32 > 1)
  VAR_36 = VAR_33[1];

 FUNC_2(VAR_31, VAR_35, VAR_36);
}
