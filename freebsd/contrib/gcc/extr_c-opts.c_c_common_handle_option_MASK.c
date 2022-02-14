
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cl_option {int flags; int opt_text; } ;
typedef enum opt_code { ____Placeholder_opt_code } opt_code ;
struct TYPE_10__ {scalar_t__ lang; } ;
struct TYPE_6__ {int missing_files; int phony_targets; void* style; } ;
struct TYPE_9__ {int print_include_names; int inhibit_warnings; int warn_trigraphs; int warn_comments; int warn_num_sign_change; int warn_multichar; int warn_deprecated; int warn_endif_labels; int warnings_are_errors; int warn_invalid_pch; int warn_missing_include_dirs; int warn_newline_at_eof; int warn_system_headers; int warn_traditional; int warn_undef; int directives_only; int dollars_in_ident; int extended_identifiers; int operator_names; int restore_pch_deps; int preprocessed; int show_column; int tabstop; char const* narrow_charset; char const* wide_charset; char const* input_charset; int objc; int pedantic_errors; int pedantic; int remap; int trigraphs; int traditional; int warn_normalize; TYPE_1__ deps; int discard_comments_in_macro_exp; int discard_comments; } ;
struct TYPE_8__ {int warning_as_error_requested; } ;
struct TYPE_7__ {int inlines_hidden; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 struct cl_option* VAR_12 ;
 char const* VAR_13 ;
 TYPE_5__* FUNC_6 (int ) ;
 TYPE_4__* VAR_14 ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int,char const*) ;
 char const* VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,...) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 TYPE_3__* VAR_62 ;
 int FUNC_11 (char const*) ;
 char const* VAR_63 ;
 int FUNC_12 (char*) ;
 char const* VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 char const* VAR_72 ;
 int VAR_73 ;
 char const* VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (char const*,char*) ;
 char const* VAR_80 ;
 int VAR_81 ;
 TYPE_2__ VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int FUNC_24 (int ,char*,...) ;
 int FUNC_25 (char const*) ;

int
FUNC_26 (size_t VAR_105, const char *VAR_106, int VAR_107)
{
  const struct cl_option *VAR_108 = &VAR_12[VAR_105];
  enum opt_code VAR_109 = (enum opt_code) VAR_105;
  int VAR_110 = 1;



  bool VAR_111 = (FUNC_6 (VAR_73)->lang == VAR_2);

  switch (VAR_109)
    {
    default:
      if (VAR_12[VAR_109].flags & (VAR_3 | VAR_4 | VAR_6 | VAR_7))
 break;




      VAR_110 = 0;
      break;

    case 247:
      VAR_74 = VAR_106;
      break;

    case 295:
      FUNC_8 (VAR_109, VAR_106);
      break;

    case 294:
      VAR_14->discard_comments = 0;
      break;

    case 293:
      VAR_14->discard_comments = 0;
      VAR_14->discard_comments_in_macro_exp = 0;
      break;

    case 292:
      FUNC_8 (VAR_109, VAR_106);
      break;

    case 291:
      VAR_46 = 1;
      break;

    case 289:
      VAR_14->print_include_names = 1;
      break;

    case 290:
      FUNC_0 (FUNC_25 (VAR_106));
      break;

    case 288:
      if (FUNC_23 (VAR_106, "-"))
 FUNC_1 (FUNC_25 (VAR_106), VAR_1, 0, 1);
      else
 {
   if (VAR_76)
     FUNC_10 ("-I- specified twice");
   VAR_76 = 1;
   FUNC_21 ();
   FUNC_12 ("obsolete option -I- used, please use -iquote instead");
 }
      break;

    case 287:
    case 283:




      VAR_14->deps.style = (VAR_109 == 287 ? VAR_8: VAR_9);
      VAR_42 = 1;
      VAR_14->inhibit_warnings = 1;
      break;

    case 286:
    case 282:
      VAR_14->deps.style = (VAR_109 == 286 ? VAR_8: VAR_9);
      VAR_15 = VAR_106;
      break;

    case 285:
      VAR_16 = 1;
      VAR_15 = VAR_106;
      break;

    case 284:
      VAR_16 = 1;
      VAR_14->deps.missing_files = 1;
      break;

    case 281:
      VAR_16 = 1;
      VAR_14->deps.phony_targets = 1;
      break;

    case 280:
    case 279:
      VAR_16 = 1;
      FUNC_8 (VAR_109, VAR_106);
      break;

    case 278:
      VAR_40 = 1;
      break;

    case 169:
      VAR_60 = VAR_107;
      break;

    case 277:
      FUNC_8 (VAR_109, VAR_106);
      break;

    case 276:

    case 261:
      FUNC_15 (VAR_107);
      FUNC_13 (VAR_107);
      FUNC_14 (VAR_107);
      VAR_84 = VAR_107;
      VAR_87 = VAR_107;

      if (VAR_109 != 261)
 VAR_91 = VAR_107;

      VAR_94 = VAR_107;
      VAR_95 = VAR_107;
      if (FUNC_5 ())
 VAR_96 = VAR_107;
      VAR_99 = VAR_107;
      FUNC_20 (VAR_107);
      VAR_98 = VAR_107;
      VAR_83 = VAR_107;



      VAR_101 = VAR_107;




      if (VAR_100 != 1)
 VAR_100 = (VAR_107 ? 2 : 0);

      if (!FUNC_5 ())


 VAR_86 = VAR_107 * 2;
      else
 {

   VAR_93 = VAR_107;
   VAR_88 = VAR_107;
 }

      VAR_14->warn_trigraphs = VAR_107;
      VAR_14->warn_comments = VAR_107;
      VAR_14->warn_num_sign_change = VAR_107;
      VAR_14->warn_multichar = VAR_107;

      if (VAR_92 == -1)
 VAR_92 = 1;
      break;

    case 275:
    case 274:
      VAR_14->warn_comments = VAR_107;
      break;

    case 273:
      VAR_14->warn_deprecated = VAR_107;
      break;

    case 271:
      VAR_14->warn_endif_labels = VAR_107;
      break;

    case 270:
      VAR_14->warnings_are_errors = VAR_107;
      VAR_62->warning_as_error_requested = VAR_107;
      break;

    case 269:
      VAR_67 = 2;
      break;

    case 268:
      FUNC_13 (VAR_107);
      break;

    case 267:
      FUNC_13 (FUNC_3 (VAR_106));
      break;

    case 266:
      FUNC_14 (VAR_107);
      break;

    case 265:

      break;

    case 264:
      VAR_14->warn_invalid_pch = VAR_107;
      break;

    case 263:
      if (VAR_107)
 VAR_86 = 1;
      else
 VAR_86 = -1;
      break;

    case 262:
      VAR_14->warn_missing_include_dirs = VAR_107;
      break;

    case 260:
      VAR_14->warn_multichar = VAR_107;
      break;


    case 259:
      VAR_14->warn_newline_at_eof = VAR_107;
      break;


    case 258:
      if (!VAR_107 || (VAR_106 && FUNC_22 (VAR_106, "none") == 0))
 VAR_14->warn_normalize = VAR_71;
      else if (!VAR_106 || FUNC_22 (VAR_106, "nfkc") == 0)
 VAR_14->warn_normalize = VAR_69;
      else if (FUNC_22 (VAR_106, "id") == 0)
 VAR_14->warn_normalize = VAR_70;
      else if (FUNC_22 (VAR_106, "nfc") == 0)
 VAR_14->warn_normalize = VAR_68;
      else
 FUNC_10 ("argument %qs to %<-Wnormalized%> not recognized", VAR_106);
      break;

    case 257:
      VAR_94 = VAR_107;
      break;

    case 256:
      VAR_97 = VAR_107;
      break;

    case 255:
      VAR_14->warn_system_headers = VAR_107;
      break;

    case 254:
      VAR_14->warn_traditional = VAR_107;
      break;

    case 253:
      VAR_14->warn_trigraphs = VAR_107;
      break;

    case 252:
      VAR_14->warn_undef = VAR_107;
      break;

    case 251:


      VAR_101 = VAR_107 * 2;
      break;

    case 250:
      VAR_102 = VAR_107;
      break;

    case 249:
      VAR_103 = VAR_107;
      break;

    case 248:
      VAR_104 = VAR_107;
      break;

    case 272:
      VAR_85 = VAR_107;
      if (VAR_107)
        VAR_89 = 1;
      break;

    case 246:
      if (!FUNC_5 ())
 FUNC_16 (0, 1);
      else
 FUNC_18 (1);
      break;

    case 245:
      FUNC_11 (VAR_106);
      break;

    case 237:
      if (!FUNC_5 ())
 {
   VAR_20 = VAR_107;
   break;
 }


    case 243:
    case 242:
    case 226:
    case 223:
    case 218:
    case 216:
    case 214:
    case 209:
    case 206:
    case 205:
    case 201:
    case 185:
    case 183:
    case 180:
    case 172:
    case 168:
    case 173:
      FUNC_24 (0, "switch %qs is no longer supported", VAR_108->opt_text);
      break;

    case 244:
      VAR_18 = VAR_107;
      break;

    case 241:
      VAR_37 = !VAR_107;
      break;

    case 240:
      VAR_38 = !VAR_107;
      break;

    case 239:
      if (VAR_107)
 VAR_110 = 0;
      else
 FUNC_9 (VAR_106);
      break;

    case 233:
      VAR_14->directives_only = 1;
      break;

    case 232:
      VAR_14->dollars_in_ident = VAR_107;
      break;

    case 221:
      VAR_107 = !VAR_107;

    case 215:
      VAR_28 = VAR_107;
      VAR_38 = !VAR_107;

      if (!VAR_107 && VAR_86 == 2)
 VAR_86 = 0;
      break;

    case 191:
      VAR_49 = VAR_107;
      break;

    case 190:
      VAR_50 = VAR_107;
      break;

    case 189:
      VAR_51 = VAR_107;
      break;

    case 187:
      VAR_52 = VAR_107;
      break;

    case 186:
      VAR_53 = VAR_107;
      break;

    case 178:
      VAR_52 = !VAR_107;
      break;

    case 177:
      VAR_53 = !VAR_107;
      break;

    case 238:
      VAR_19 = VAR_107;
      break;

    case 236:
      VAR_21 = VAR_107;
      break;

    case 235:
      VAR_13 = VAR_106;
      break;

    case 234:
      VAR_22 = VAR_107;
      break;

    case 231:
      VAR_24 = VAR_107;
      break;

    case 227:
      VAR_25 = VAR_107;
      break;

    case 224:
      VAR_14->extended_identifiers = VAR_107;
      break;

    case 222:
      VAR_34 = VAR_107;
      break;

    case 220:
      VAR_39 = !VAR_107;
      break;

    case 219:
      VAR_35 = !VAR_107;
      break;

    case 217:
      FUNC_24 (0, "-fhandle-exceptions has been renamed -fexceptions (and is now on by default)");
      VAR_26 = VAR_107;
      break;

    case 213:
      VAR_29 = VAR_107;
      break;

    case 212:
      VAR_30 = VAR_107;
      break;

    case 211:
      VAR_31 = VAR_107;
      break;

    case 208:
      VAR_32 = VAR_107;
      break;

    case 207:
      VAR_33 = VAR_107;
      break;

    case 204:
      VAR_35 = VAR_107;
      break;

    case 203:
      VAR_36 = VAR_107;
      break;

    case 202:
      VAR_41 = !VAR_107;
      break;

    case 200:
      VAR_14->operator_names = VAR_107;
      break;

    case 199:
      VAR_43 = VAR_107;
      break;

    case 198:
      VAR_14->restore_pch_deps = VAR_107;
      break;

    case 197:
      VAR_44 = VAR_107;
      break;

    case 196:
      VAR_45 = VAR_107;
      break;

    case 195:
      VAR_14->preprocessed = VAR_107;
      break;

    case 194:
      VAR_47 = VAR_107;
      break;

    case 193:
      VAR_58 = VAR_107;
      if (VAR_107)
 VAR_31 = 0;
      break;

    case 192:
      VAR_48 = VAR_107;
      break;

    case 188:
      VAR_14->show_column = VAR_107;
      break;

    case 184:
      VAR_23 = VAR_107;
      break;

    case 182:

      if (VAR_107 >= 1 && VAR_107 <= 100)
 VAR_14->tabstop = VAR_107;
      break;

    case 225:
      VAR_14->narrow_charset = VAR_106;
      break;

    case 170:
      VAR_14->wide_charset = VAR_106;
      break;

    case 210:
      VAR_14->input_charset = VAR_106;
      break;

    case 181:
      VAR_66 = VAR_107;
      break;

    case 176:
      VAR_56 = VAR_107;
      break;

    case 175:
      VAR_57 = VAR_107;
      break;

    case 174:
      VAR_82.inlines_hidden = VAR_107;
      break;

    case 171:
      VAR_59 = VAR_107;
      break;

    case 179:
      VAR_54 = VAR_107;
      break;

    case 167:
      VAR_61 = VAR_107;
      break;

    case 166:
      VAR_27 = 1;
      break;

    case 230:
      FUNC_19 ("base");
      break;

    case 228:
      FUNC_19 ("dir:ord:sys,dir:gen:any,ind:base");
      break;

    case 229:
      FUNC_19 (VAR_106);
      break;

    case 165:
      FUNC_1 (FUNC_25 (VAR_106), VAR_0, 0, 1);
      break;

    case 164:
    case 162:
      FUNC_8 (VAR_109, VAR_106);
      break;

    case 163:
      VAR_63 = VAR_106;
      break;

    case 161:
      VAR_64 = VAR_106;
      break;

    case 160:
      FUNC_1 (FUNC_25 (VAR_106), VAR_10, 0, 1);
      break;

    case 159:
      VAR_80 = VAR_106;
      break;

    case 158:
      FUNC_1 (FUNC_25 (VAR_106), VAR_11, 0, 1);
      break;

    case 157:
      FUNC_2 (VAR_106, VAR_11);
      break;

    case 156:
      FUNC_2 (VAR_106, VAR_1);
      break;

    case 155:
      FUNC_7 (VAR_73, VAR_2);
      VAR_14->dollars_in_ident = 0;
      break;

    case 154:
      VAR_65 = 1;
      break;

    case 153:
      VAR_14->objc = 1;
      break;

    case 152:
      VAR_78 = 0;
      break;

    case 151:
      VAR_77 = 0;
      break;

    case 150:
      if (!VAR_72)
 VAR_72 = VAR_106;
      else
 FUNC_10 ("output filename specified twice");
      break;




    case 148:
      VAR_14->pedantic_errors = 1;

    case 149:
      VAR_14->pedantic = 1;
      VAR_14->warn_endif_labels = 1;
      if (VAR_92 == -1)
 VAR_92 = 1;
      if (VAR_90 == -1)
 VAR_90 = 1;
      break;

    case 147:
      VAR_75 = 1;
      break;

    case 146:
      FUNC_4 (VAR_79);
      VAR_17 = 1;
      break;

    case 145:
      VAR_14->remap = 1;
      break;

    case 141:
    case 137:
      if (!VAR_111)
 FUNC_18 (VAR_109 == 141 );
      break;

    case 144:
    case 136:
    case 135:
      if (!VAR_111)
 FUNC_16 (VAR_109 == 135 , 1 );
      break;

    case 140:
      if (!VAR_111)
 FUNC_16 (0 , 0 );
      break;

    case 143:
    case 142:
    case 134:
    case 133:
      if (!VAR_111)
 FUNC_17 (1 );
      break;

    case 139:
    case 138:
      if (!VAR_111)
 FUNC_17 (0 );
      break;

    case 131:
      VAR_14->trigraphs = 1;
      break;

    case 132:
      VAR_14->traditional = 1;
      break;

    case 130:
      VAR_55 = 1;
      break;

    case 128:
      VAR_14->inhibit_warnings = 1;
      break;

    case 129:
      VAR_81 = 1;
      break;
    }

  return VAR_110;
}
